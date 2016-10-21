using UnityEngine;
using System.Collections;

// reference to the UI namespace
using UnityEngine.UI;

// reference to manage my scenes
using UnityEngine.SceneManagement;

public class StartingController : MonoBehaviour {

	[Header("Labels")]
	public Text GameTitleLabel1;
	public Text GameTitleLabel2;
	public Text Authore;
	public Text Version;
	public Text p;
	[Header("Buttons")]
	public Button StartButton;

	public int count;



	// Use this for initialization
	void Start () {

		this.GameTitleLabel1.text = "HALLOWEEN ATTACK";
		this.GameTitleLabel2.text = "HALLOWEEN ATTACK";
		this.Authore.text = "MD MAMUNUR RAHMAN";
		this.Version.text = "Version: 0.0.1";

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
		this.p.text += ".";
		if (count > 180) {
			count = 0;
			SceneManager.LoadScene ("Play");
		}
	}

	public void StartButtonClick(){
		

	}

		
		
}
