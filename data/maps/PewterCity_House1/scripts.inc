PewterCity_House1_MapScripts::
	.byte 0

PewterCityHouse1_1::
lock
faceplayer
msgbox PewterCityHouse1_1_Texto_1 MSGBOX_NPC
release
end

PewterCityHouse1_1_Texto_1:
	.string "Sags nicht meinem Vater, aber sobald\n"
	.string "sich mein NIDORAN zu einem NIDOKING\l"
	.string "entwickelt, werde ich eurer\l"
	.string "Organisation beitreten. Ich glaube,\l"
	.string "GIOVANNI wird richtig beeindruckt sein,\l"
	.string "dass ich in so einem jungen Alter schon\l"
	.string "ein NIDOKING haben werde.$"



PewterCityHouse1_2::
end



PewterCityHouse1_3::
lock     
faceplayer     
msgbox PewterCity_House1_Text_3, MSGBOX_DEFAULT
release     
end

PewterCity_House1_Text_3:
	.string "In diesem Haus sind Kinder, Mann! Du\n"
	.string "solltest dich schämen, einfach so ein\l"
	.string "Privatgrundstück zu betreten.\p"
	.string "Beim kleinsten Verdachtsmoment rufe\n"
	.string "ich die Polizei.$"
