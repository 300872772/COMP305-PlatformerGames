using UnityEngine;
using System.Collections;
/**
 * This is a Platformer game 
 * 
 * @FileName: PlayerController.cs
 * @Author Md Mamunur Rahman
 * @student ID: 300872772
 * @Last Update 21-October-2016
 * @description: this file is KillScript cs file for the game
 */

/**  
* <summary>  
* This is the KillScript class to kill objets.  
* </summary>  
*   
* @class KillScript  
*/
public class KillScript : MonoBehaviour {
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
			Destroy (this.gameObject);
		}
	}
}
