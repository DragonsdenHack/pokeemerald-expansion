Route1_MapScripts::
	.byte 0

Route1_1::
end


Route1_2::
lock     
faceplayer     
msgbox Route1_Text_2, MSGBOX_DEFAULT
release     
end

Route1_Text_2:
.string "Cuando LANCE acabe de hacer\n"
.string "limpieza, a vosotros ROCKETS no os\l"
.string "quedará otra que huir de KANTO\l"
.string "como las ratas que sois.$"
