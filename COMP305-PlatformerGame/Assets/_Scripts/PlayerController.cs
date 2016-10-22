using UnityEngine;
using System.Collections;

/**
 * This is a Platformer game 
 * 
 * @FileName: PlayerController.cs
 * @Author Md Mamunur Rahman
 * @student ID: 300872772
 * @Last Update 21-October-2016
 * @description: this file is PlayerController cs file for the game
 */

/**  
* <summary>  
* This is the PlayerController class to control the player charecter.  
* </summary>  
*   
* @class MenuController  
*/
public class PlayerController : MonoBehaviour {
	// PRIVATE INSTANCE VARIABLES
	private Transform _transform;
	private Rigidbody2D _rigidbody;
	private Animator _animator;
	private GameObject _camera;
	private GameObject _spawnPoint;
	private GameObject _gameControllerObject;
	private GameController _gameController;
	private int EnemydethCount;

	private float _move;
	private float _jump;
	private bool _isFacingRight;
	private bool _isGrounded;
	private bool _isIdeal;

	// PUBLIC INSTANCE VARIABLES
	public float Velocity = 10f;
	public float JumpForce = 100f;


	[Header("Sound Clips")]
	public AudioSource JumpSound;
	public AudioSource DeathSound;
	public AudioSource CoinSound;
	public AudioSource HurtSound;
	public AudioSource EnemyDeadSound;
	public AudioSource BeathingSound;

	/**
        * <summary>
        * This is the method for starting the PlayerController class which initiates value
        * </summary>
        * 
        * @method Start
        * @returns {void} 
        */
	void Start () {
		this._initialize ();
	}
	
	/**
        * <summary>
        * This method is called once per frame.
        * </summary>
        * 
        * @method FixedUpdate
        * @returns {void} 
        */
	void FixedUpdate () {

		if (this._isGrounded) {
			// check if input is present for movement
			this._move = Input.GetAxis ("Horizontal");
			if (this._move > 0f) {
				// set the animation state to "Walk"
				this._animator.SetInteger ("RS", 1);
				this._move = 1;
				this._isFacingRight = true;
				this._flip ();
				this._isIdeal = false;
			} else if (this._move < 0f) {
				this._animator.SetInteger ("RS", 1);
				this._move = -1;
				this._isFacingRight = false;
				this._flip ();
				this._isIdeal = false;
			} else {
				// set the animation state to "Idle"
				this._animator.SetInteger ("RS", 0);
				this._move = 0f;
				this._isIdeal = true;

			}

			// check if input is present for jumping
			if (Input.GetKeyDown (KeyCode.Space)) {
				this._jump = 1f;
				this.JumpSound.Play ();
			}

			this._rigidbody.AddForce (new Vector2 (
				this._move * this.Velocity, 
				this._jump * this.JumpForce), 
				ForceMode2D.Force);

		} else {
			this._move = 0f;
			this._jump = 0f;
		}

		this._camera.transform.position = new Vector3 (
			this._transform.position.x, 
			this._transform.position.y, 
			-10f);

	}

	// PRIVATE METHODS

	/**
	* <summary>
	* This method initializes variables and object when called
	* </summary>
	* 
	* @method _initialize
	* @returns {void} 
	*/
	private void _initialize() {
		this._transform = GetComponent<Transform> ();
		this._rigidbody = GetComponent<Rigidbody2D> ();
		this._animator = GetComponent<Animator> ();
		this._camera = GameObject.FindWithTag ("MainCamera");
		this._spawnPoint = GameObject.FindWithTag ("SpawnPoint");

		this._gameControllerObject = GameObject.Find ("Game Controller");
		this._gameController = this._gameControllerObject.GetComponent<GameController> () as GameController;

		this._move = 0f;
		this._isFacingRight = true;
		this._isGrounded = false;
		this._isIdeal = true;
	}


	/**
	* <summary>
	* This method flips the character's bitmap across the x-axis
	* </summary>
	* 
	* @method _flip
	* @returns {void} 
	*/
	private void _flip () {
		if (this._isFacingRight) {
			this._transform.localScale = new Vector2 (1f, 1f);
		} else {
			this._transform.localScale = new Vector2 (-1f, 1f);
		}
	}
	/**
	* <summary>
	* This method activate on collides with objects at entry
	* </summary>
	* 
	* @method OnCollisionEnter2D
	* @param {Collision2D} other
	* @returns {void} 
	*/
	private void OnCollisionEnter2D(Collision2D other) {
		if (other.gameObject.CompareTag ("DeathPlane")) {
			// move the player's position to the spawn point's position
			this._transform.position = this._spawnPoint.transform.position;
			this.DeathSound.Play ();
			this._gameController.LivesValue -= 1;
		}

		if (other.gameObject.CompareTag ("Relic")) {
			Destroy (other.gameObject);
			this.CoinSound.Play ();
			this._gameController.ScoreValue += 100;
		}

		if (other.gameObject.CompareTag ("Enemy")) {
			// move the player's position to the spawn point's position
			this._transform.position = this._spawnPoint.transform.position;
			this.HurtSound.Play ();
			this._gameController.LivesValue -= 1;
		}
	}
	/**
	* <summary>
	* This method activate on collides with objects during staying
	* </summary>
	* 
	* @method OnCollisionStay2D
	* @param {Collision2D} other
	* @returns {void} 
	*/
	private void OnCollisionStay2D(Collision2D other) {
		if (other.gameObject.CompareTag ("Platform")) {
			this._isGrounded = true;
			if (this._isIdeal == true && this.BeathingSound.isPlaying != true) {

				//this.BeathingSound.Play ();

			} 

		}
	}
	/**
	* <summary>
	* This method activate on collides with objects on exits
	* </summary>
	* 
	* @method OnCollisionExit2D
	* @param {Collision2D} other
	* @returns {void} 
	*/
	private void OnCollisionExit2D(Collision2D other) {
		//this._animator.SetInteger ("HeroState", 2);

		this._isGrounded = false;
	}

	/**
	* <summary>
	* This method activate on collides with objects on Trigger Entry
	* </summary>
	* 
	* @method OnTriggerEnter2D
	* @param {Collision2D} other
	* @returns {void} 
	*/
	private void OnTriggerEnter2D(Collider2D other) {
		if(other.gameObject.CompareTag("Enemy")) {

			EnemydethCount += 1;
			if (EnemydethCount > 1) {
				this.EnemyDeadSound.Play ();
				Destroy (other.gameObject);
				EnemydethCount = 0;
			}

			this._gameController.LivesValue -= 1;
		}
	}
}
