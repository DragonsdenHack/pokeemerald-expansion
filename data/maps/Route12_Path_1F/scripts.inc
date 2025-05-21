Route12_Path_1F_MapScripts::
	.byte 0

Route12Path1F_1::
lock     
faceplayer     
msgbox Route12Path1F_Text_1, MSGBOX_DEFAULT
release     
end

Route12Path1F_Text_1:
	.string "Eine falsche Bewegung und du wirst\n"
	.string "verhaftet! Komm schon! Gib mir einen\l"
	.string "Grund! Nur einen!$"
