using UnityEngine;
using System.Collections;
/**
 * This is a Platformer game 
 * 
 * @FileName: EnemyController.cs
 * @Author Md Mamunur Rahman
 * @student ID: 300872772
 * @Last Update 21-October-2016
 * @description: this file is EnemyController cs file for the game
 */

/**  
* <summary>  
* This is the EnemyController class to control the enemy charecter.  
* </summary>  
*   
* @class EnemyController  
*/
public class EnemyController : MonoBehaviour {

	// PRIVATE INSTANCE VARIABLES 
	private Transform _transform;
	private Rigidbody2D _rigidbody;
	private bool _isGrounded;
	private bool _isGroundAhead;
	private bool _isPillarAhead;
	private bool _isPlayerDetected;
	private int _angryMovementCount;

	// PUBLIC INSTANCE VARIABLES 
	public float Speed = 5f;
	public float MaximumSpeed = 4f;
	public Transform SightStart;
	public Transform SightEnd;
	public Transform LineOfSight;


	/**
        * <summary>
        * This is the method for starting the EnemyController class which initiates value
        * </summary>
        * 
        * @method Start
        * @returns {void} 
        */
	void Start () {
		// make a reference to this object's Transform and Rigidbody2D components
		this._transform = GetComponent<Transform> ();
		this._rigidbody = GetComponent<Rigidbody2D> ();
		this._isGrounded = false;
		this._isGroundAhead = true;
		this._isPlayerDetected = false;
		this._isPillarAhead = false;
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
		// check if the object is grounded 
		if (this._isGrounded) {
			// move the object in the direction of his local scale
			this._rigidbody.velocity = new Vector2(this._transform.localScale.x, 0) * this.Speed;

			this._isGroundAhead = Physics2D.Linecast (
				this.SightStart.position,
				this.SightEnd.position,
				1 << LayerMask.NameToLayer ("Solid"));
			
			this._isPillarAhead = Physics2D.Linecast (
				this.SightStart.position,
				this.SightEnd.position,
				1 << LayerMask.NameToLayer ("Pillar"));

			this._isPlayerDetected = Physics2D.Linecast (
				this.SightStart.position,
				this.LineOfSight.position,
				1 << LayerMask.NameToLayer ("Player"));

			// for debugging purposes only
			Debug.DrawLine(this.SightStart.position, this.SightEnd.position);
			Debug.DrawLine(this.SightStart.position, this.LineOfSight.position);

			// check if there is ground ahead for the object to walk
			if (this._isGroundAhead == false) {
				// flip the direction
				this._flip();
				_angryMovementCount += 1;
			}
			if (this._isPillarAhead == true) {
				// flip the direction
				this._flip();
				_angryMovementCount += 1;
			}
			// check if player is detected and then increase speed
			if (this._isPlayerDetected) {
				// increase speed to maximumSpeed
				this.Speed *= 2;
				if (this.Speed >= this.MaximumSpeed) {
					this.Speed = this.MaximumSpeed;
					_angryMovementCount = 0;
				}
			} else {
				
				if (_angryMovementCount > 2) {
					this.Speed = 2f;
				}
			}
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
		if (other.gameObject.CompareTag ("Enemy")) {
			this._flip ();
		}	
		if (other.gameObject.CompareTag ("Pillar")) {
			this._isPillarAhead=true;
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
		if (other.gameObject.CompareTag ("Platform")) {
			this._isGrounded = false;
		}
		if (other.gameObject.CompareTag ("Pillar")) {
			this._isPillarAhead=false;
		}
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
		if (this._transform.localScale.x == 1) {
			this._transform.localScale = new Vector2 (-1f, 1f);
		} else {
			this._transform.localScale = new Vector2 (1f, 1f);
		}
	}
}
