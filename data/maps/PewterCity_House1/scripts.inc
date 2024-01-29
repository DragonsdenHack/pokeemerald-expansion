PewterCity_House1_MapScripts::
	.byte 0

PewterCityHouse1_1::
lock
faceplayer
msgbox PewterCityHouse1_1_Texto_1 MSGBOX_NPC
release
end

PewterCityHouse1_1_Texto_1:
	.string "Do not tell this to my father, but when\n"
	.string "my NIDORAN evolves to a NIDOKING I will\l"
	.string "join your organization. I'm sure\l"
	.string "GIOVANNI will congratulate me for\l"
	.string "having a NIDOKING at such early age!$"



PewterCityHouse1_2::
end



PewterCityHouse1_3::
lock     
faceplayer     
msgbox PewterCity_House1_Text_3, MSGBOX_DEFAULT
release     
end

PewterCity_House1_Text_3:
	.string "There are children at this house\n"
	.string "ROCKET, you should be ashamed of\l"
	.string "getting into a private property like\l"
	.string "this, at the minimum hint of trying\l"
	.string "something suspicious I will call police.$"
