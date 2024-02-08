Culto2_MapScripts::
	.byte 0

Culto2_EventScript_Medium::
	trainerbattle_single TRAINER_RICKY_3, Culto2_Text_MediumIntro, Culto2_Text_MediumDefeated
	msgbox Culto2_Text_MediumPostBattle, MSGBOX_AUTOCLOSE
	end



Culto2_EventScript_Medium2::
	trainerbattle_single TRAINER_RICKY_4, Culto2_Text_Medium2Intro, Culto2_Text_Medium2Defeated
	msgbox Culto2_Text_Medium2PostBattle, MSGBOX_AUTOCLOSE
	end

Culto2_NPC_2::
lock
faceplayer
msgbox Culto2_NPC_2_Texto_1 MSGBOX_NPC
release
end

Culto2_NPC_2_Texto_1:
	.string "You haven't seen anything yet; get\n"
	.string "ready to doubt about everything.$"


Culto2_NPC_4::
lock
faceplayer
msgbox Culto2_NPC_4_Texto_1 MSGBOX_NPC
release
end

Culto2_NPC_4_Texto_1:
	.string "Watch every step you take here, kid;\n"
	.string "you're stepping on living history.$"


Culto2_NPC_5::
lock
faceplayer
msgbox Culto2_NPC_5_Texto_1 MSGBOX_NPC
release
end

Culto2_NPC_5_Texto_1:
	.string "The truth, even if only a few know it,\n"
	.string "it's still the truth; nobody can change\l"
	.string "the fact that you were the KANTO\l"
	.string "champion.$"


Culto2_NPC_6::
lock
faceplayer
msgbox Culto2_NPC_6_Texto_1 MSGBOX_NPC
release
end

Culto2_NPC_6_Texto_1:
	.string "How have we been able to live here\n"
	.string "without venturing outside for\l"
	.string "centuries? You're not ready to grasp\l"
	.string "the true dimensions of this place;\l"
	.string "everything we need is here. The interior\l"
	.string "of this place is more expansive than\l"
	.string "any city you know, a tribute to the\l"
	.string "eternal and imperishable.$"
