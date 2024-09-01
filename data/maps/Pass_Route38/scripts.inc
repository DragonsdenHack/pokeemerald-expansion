Pass_Route38_MapScripts::
	.byte 0

PassRoute38_1::
lock     
faceplayer     
msgbox Pass_Route38_Text_1, MSGBOX_DEFAULT
release     
end

Pass_Route38_Text_1:
	.string "Further to the west, you can find the\n"
	.string "MOOMOO FARM. Their milk is the best bang\l"
	.string "for your buck!$"



PassRoute38_2::
end



PassRoute38_3::
lock     
faceplayer     
msgbox Pass_Route38_Text_3, MSGBOX_DEFAULT
release     
end

Pass_Route38_Text_3:
	.string "Be careful on the next route. TAUROS\n"
	.string "roam freely and charge at anyone they\l"
	.string "see as a threat!$"

Ecruteak_EventScript_ReceiveAbsol::
    lock
    faceplayer
	checkmoncatch SPECIES_ABSOL
	goto_if_eq VAR_RESULT, FALSE, Pass_Route38_EventScript_TakeNosepass 
	msgbox Pass_Route_38_Text_1, MSGBOX_DEFAULT
	release
	end



Pass_Route38_EventScript_TakeNosepass::
    msgbox Pass_Route38_Text_TakeNosepass MSGBOX_DEFAULT
	msgbox Pass_Route38_Text_TakeNosepass2 MSGBOX_DEFAULT
    playfanfare MUS_OBTAIN_TMHM
	msgbox Pass_Route38_Text_MensajeNosepass, MSGBOX_DEFAULT
	givemon SPECIES_ABSOL, 25, ITEM_NONE
	waitfanfare  
	release
	end 



Pass_Route38_Text_TakeNosepass:
	.string "This city has witnessed many\n"
	.string "calamities, so it's wise to be prepared\l"
	.string "for whatever may come.$"


Pass_Route38_Text_TakeNosepass2:
	.string "Talking about calamities, having a\n"
	.string "POKÉMON like this could be beneficial.$"


Pass_Route38_Text_MensajeNosepass:
	.string "YOU OBTAINED A LV.25 ABSOL!$"

Pass_Route_38_Text_1:
	.string "The past GOLDENROD CITY GYM LEADER\n"
	.string "had an ABSOL, which was extraordinary,\l"
	.string "resembling the evolution of a common\l"
	.string "ABSOL.$"

