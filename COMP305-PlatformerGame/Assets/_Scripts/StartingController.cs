using UnityEngine;
using System.Collections;

// reference to the UI namespace
using UnityEngine.UI;

// reference to manage my scenes
using UnityEngine.SceneManagement;
/**
 * This is a Platformer game 
 * 
 * @FileName: StartingController.cs
 * @Author Md Mamunur Rahman
 * @student ID: 300872772
 * @Last Update 21-October-2016
 * @description: this file is StartingController cs file for the game
 */

/**  
* <summary>  
* This is the StartingController class to control the Game starting.  
* </summary>  
*   
* @class StartingController  
*/
public class StartingController : MonoBehaviour {
	// PUBLIC INSTANCE VARIABLES
	[Header("Labels")]
	public Text GameTitleLabel1;
	public Text GameTitleLabel2;
	public Text Authore;
	public Text Version;
	public Text p;
//	[Header("Buttons")]
	//public Button StartButton;

	public int count;
	public AudioSource LaughSound;


	/**
        * <summary>
        * This is the method for starting the EnemyController class which initiates value
        * </summary>
        * 
        * @method Start
        * @returns {void} 
        */
	void Start () {

		this.GameTitleLabel1.text = "HALLOWEEN ATTACK";
		this.GameTitleLabel2.text = "HALLOWEEN ATTACK";
		this.Authore.text = "MD MAMUNUR RAHMAN";
		this.Version.text = "Version: 0.0.1";
		this.LaughSound.Play ();
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
		count += 1;
		this.p.text += "_";
		if (count > 50) {
			count = 0;
			this.p.text = "";
			//SceneManager.LoadScene ("Play");
		}


		if (this.LaughSound.isPlaying == true) {
		} else {
			//SceneManager.LoadScene ("Play");
		}
	}

	public void StartButtonClick(){
		SceneManager.LoadScene ("Play");
	
	}

		
		
}
