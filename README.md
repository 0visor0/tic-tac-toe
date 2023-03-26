# tic-tac-toe
Welcome to CLI based TIC TAC TOE stimulator!!! 
This is a CLI based TIC TAC TOE stimulator game, 
it will be most preferable to play it on a linux terminal 
(because the game creator doesn't know a shit 'bout how to play it on windows or mac terminal
so he cannot explain how to play there)

Requirements: Linux OS, a linux terminal, bash shell (not necessarily required because it either already exists 
              on linux system or other shell will also work), g++ script

If u don't have a Linux OS then:

Download Linux OS if u have not yet or if u don know then u can simply Google how to do it or follow a youtube video on how to do it.
Or Try Windows Subsystem for Linux (WSL) in WINDOWS, simply open Windows Store, type in WSL and install any Linux Distro of choice (Ubuntu, OpenSUSE, Kali, Debian, Arch Linux, etc. If you are Unknown to Linux and will follow all the steps provided here please download any Debian based Distro like Ubuntu, Kali etc.). Visit https://learn.microsoft.com/en-us/windows/wsl/ for more info on WSL.

Open your Linux Terminal, now follow the steps to download g++ script if not installed previously and change directory as per desire:

	Step 1: Update and Upgrade your system first, type
		> sudo apt update && sudo apt upgrade

    	STEP 2: To Download g++ script, type
		> sudo apt-get install g++
				
	(Note: apply this step onli if g++ is not installed)
		
    	Step 3: Change to your Desired Directory to save the File or just stay in current Directory.
		(To Change the directory say you want to switch it to folder called projects, type > cd /projects)
				
If you are using WSL then open the Downloaded Terminal and follow the following steps:

	If opening WSL Terminal for first time give it some time to auto install and create when asked and remember dont forget the password ;).

	Step 1: Update and Upgrade your system first, type
		> sudo apt update && sudo apt upgrade
				
	Step 2: To Download g++ script, type
		> sudo apt-get install g++
				
	Step 3: Change to your Desired Directory to save the File or just stay in current Directory.
		To Change save the file to a Windows drive (say Drive M:) and inside folder called projects, type
		> mount -t drvfs M: /mnt/m
		> cd /mnt/m/projects
		
		(Note: These Steps are required to be followed if you are doing this for the first time, if you are doing this for the second time or more then just switch to desired folder by typing say > cd /mnt/m/projects)
		
		
Now Follow these Steps regardless of what Terminal you are using:

    	STEP 1: Copy the file using command 
		> git clone https://github.com/8ByteBit/tic-tac-toe
		
		(Note: This Step is onli to be followed if you have not Downloaded the latest version of the Game or have not yet installed it)

    	STEP 2: open the tic_tac_toe folder by typing command 
		> cd tic_tac_toe 
                (Make sure u r in the folder where tic_tac_toe file exists say) 

    	STEP 3: write the command 
		> g++ tic_tac_toe.cpp -o ttt
         
    	STEP 4: now type command 
		> ./ttt
        
Remember if you stumble upon any problem there's Google for help or even better, ChatGPT.        

Now make sure u enjoy the game <3!!!
