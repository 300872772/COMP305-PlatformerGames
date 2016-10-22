using UnityEngine;
using System.Collections;
/**
 * This is a Platformer game 
 * 
 * @FileName: PlayerController.cs
 * @Author Md Mamunur Rahman
 * @student ID: 300872772
 * @Last Update 21-October-2016
 * @description: this file is CheckPointController cs file for the game
 */

/**  
* <summary>  
* This is the CheckPointController class to control the checking points.  
* </summary>  
*   
* @class CheckPointController  
*/
public class CheckPointController : MonoBehaviour {
	// PRIVATE INSTANCE VARIABLES
	private Transform _transform;

	// PUBLIC INSTANCE VARIABLES

	public GameObject SpawnPoint;



	/**
        * <summary>
        * This is the method for starting the CheckPointController class which initiates value
        * </summary>
        * 
        * @method Start
        * @returns {void} 
        */
	void Start () {
		this._transform = GetComponent<Transform> ();
		this.SpawnPoint = GameObject.FindWithTag ("SpawnPoint");
	}
	
	/**
        * <summary>
        * This method is called once per frame.
        * </summary>
        * 
        * @method Update
        * @returns {void} 
        */
	void Update () {
	
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
	void OnTriggerEnter2D(Collider2D other) {
		if (other.gameObject.CompareTag ("Player")) {
			this.SpawnPoint.transform.position = this._transform.position;
		}
	}
}
