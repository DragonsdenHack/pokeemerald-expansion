ViridianCity_School_MapScripts::
	.byte 0

ViridianCitySchool1::
lock     
faceplayer     
msgbox ViridianCity_School_Text_1, MSGBOX_DEFAULT
release     
end

ViridianCity_School_Text_1:
	.string "Das ist doch zum Kotzen! Warum muss ich\n"
	.string "das auf Englisch lernen?$"



ViridianCitySchool2::
lock     
faceplayer     
msgbox ViridianCity_School_Text_2, MSGBOX_DEFAULT
release     
end

ViridianCity_School_Text_2:
	.string "Das habe ich dir doch schon erklärt!\p"
	.string "Heutzutage sind grundlegende\n"
	.string "Englischkenntnisse ein Muss.\p"
	.string "Also beschwere dich nicht!$"
