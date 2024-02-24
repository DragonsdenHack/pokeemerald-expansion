SilphS1_MapScripts::
	.byte 0

SilphS1_EventScript_Cientifico::
	trainerbattle_single TRAINER_LOLA_2, SilphS1_Text_CientificoIntro, SilphS1_Text_CientificoDefeated
	msgbox SilphS1_Text_CientificoPostBattle, MSGBOX_AUTOCLOSE
	end



SilphS1_1::
lock     
faceplayer     
msgbox SilphS1_Text_1, MSGBOX_DEFAULT
release     
end


SilphS1_Text_1:
	.string "Most folks are just keeping the\n"
	.string "societal wheel turning, but we're here\l"
	.string "to be part of that few who want to\l"
	.string "expand our base and take humanity to\l"
	.string "the next level.$"



SilphS1_2::
lock     
faceplayer     
msgbox SilphS1_Text_2, MSGBOX_DEFAULT
release     
end


SilphS1_Text_2:
	.string "I never thought I would say this, but I\n"
	.string "extend my respects to a TEAM ROCKET\l"
	.string "member. Thanks to you, tyranny in this\l"
	.string "region has finished. I feel ashamed of\l"
	.string "all the police officers who worked for\l"
	.string "LANCE and collaborated in that damned\l"
	.string "masked dictatorship.$"



SilphS1_3::
lock     
faceplayer     
msgbox SilphS1_Text_3, MSGBOX_DEFAULT
release     
end


SilphS1_Text_3:
	.string "You're here just because our CHIEF\n"
	.string "totally believes in you. Cool, right?$"



SilphS1_4::
lock     
faceplayer     
msgbox SilphS1_Text_4, MSGBOX_DEFAULT
release     
end


SilphS1_Text_4:
	.string "Well done on reaching this point. It\n"
	.string "indicates that you've successfully\l"
	.string "broken away from that dormant side of\l"
	.string "Kanto, still fixated on the belief in\l"
	.string "only 150 POKÉMON. We're here to bring\l"
	.string "together and document the most\l"
	.string "notable things we've discovered beyond\l"
	.string "those limits.$"



SilphS1Documento_100::
lock     
showmonpic SPECIES_DARMANITAN, 10, 3  
playmoncry SPECIES_DARMANITAN, CRY_MODE_ENCOUNTER 
msgbox SilphS1Documento_Text_100, MSGBOX_DEFAULT
hidemonpic
release     
end

SilphS1Documento_Text_100:
.string "DARMANITAN: FIRE/FIGHTING\p"
	.string "HP: 105\n"
	.string "ATTACK: 140\l"
	.string "DEFENSE: 65\l"
	.string "SPECIAL ATTACK: 30\l"
	.string "SPECIAL DEFENSE: 65\l"
	.string "SPEED: 95\l"
	.string "TOTAL: 500\p"
	.string "When rage and strength take a POKÉMON\n"
	.string "form. An unyielding energy courses\l"
	.string "through them. This leads them to act\l"
	.string "and charge, unleashing their sheer\l"
	.string "brute force even before their mind\l"
	.string "commands it. It's the reason behind\l"
	.string "their impressive ATTACK stat of 140\l"
	.string "BASE, but their SPECIAL ATTACK is\l"
	.string "notably weak at 30.$"

