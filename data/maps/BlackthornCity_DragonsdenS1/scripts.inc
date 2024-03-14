BlackthornCity_DragonsdenS1_MapScripts::
	.byte 0

DragonsdenS1_1::
lock     
faceplayer     
msgbox DragonsdenS1_Text_1, MSGBOX_DEFAULT
release     
end

DragonsdenS1_Text_1:
	.string "Anyone who craves power beyond their\n"
	.string "comprehension ends up being consumed\l"
	.string "by it, and that ZEUS has no idea of the\l"
	.string "magnitude of the power he wants to\l"
	.string "awaken.$"



DragonsdenS1_2::
lock
msgbox DragonsdenS1_2_Text_2, MSGBOX_SIGN
release
end

DragonsdenS1_2_Text_2:
.string "DRAGON'S DEN$"



DragonsdenS1_3::
end



DragonsdenS1_4::
lock     
faceplayer     
msgbox DragonsdenS1_Text_4, MSGBOX_DEFAULT
release     
end

DragonsdenS1_Text_4:
	.string "Who are you? If you're not a DRAGON\n"
	.string "TYPE specialist, you shouldn't be here.\l"
	.string "Ha, I bet none of your POKÉMON even\l"
	.string "surpass the hierarchy of a KINGDRA, we\l"
	.string "won't even talk about a PSEUDO\l"
	.string "LEGENDARY like DRAGONITE! The POKÉMON\l"
	.string "world outside of the DRAGON TYPE is so\l"
	.string "mediocre!$"



DragonsdenS1_EventScript_ReceiveDrampa::
    lock
    faceplayer
	checkmoncatch SPECIES_DRAMPA
	goto_if_eq VAR_RESULT, FALSE, DragonsdenS1_EventScript_TakeDrampa 
	msgbox DragonsdenS1_Text_2, MSGBOX_DEFAULT
	release
	end



DragonsdenS1_EventScript_TakeDrampa::
    msgbox DragonsdenS1_Text_TakeDrampa MSGBOX_DEFAULT
	msgbox DragonsdenS1_Text_TakeDrampa2 MSGBOX_DEFAULT
    playfanfare MUS_OBTAIN_TMHM
	msgbox DragonsdenS1_Text_MensajeDrampa, MSGBOX_DEFAULT
	givemon SPECIES_DRAMPA, 50, ITEM_DRAGON_GEM
	waitfanfare  
	release
	end 

DragonsdenS1_Text_TakeDrampa:
	.string "Very few are the chosen ones allowed\n"
	.string "entry into this sacred place; you must\l"
	.string "be {PLAYER}.$"

DragonsdenS1_Text_TakeDrampa2:
	.string "May this POKÉMON bring you wisdom and\n"
	.string "companionship during your journeys.$"

DragonsdenS1_Text_MensajeDrampa:
.string "YOU OBTAINED A LV.50 DRAMPA!$"

DragonsdenS1_Text_2:
	.string "DRAMPA is a very unique dragon. It\n"
	.string "focuses on SPECIAL ATTACK, a symbol of\l"
	.string "its great wisdom. It's very slow but\l"
	.string "also has good defenses. The DRAGON'S\l"
	.string "DEN has always had some specimens in\l"
	.string "its deepest caves. I hope you can keep\l"
	.string "the secret.$"
