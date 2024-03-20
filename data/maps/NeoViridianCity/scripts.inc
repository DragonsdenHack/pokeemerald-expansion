NeoViridianCity_MapScripts::
	.byte 0

NeoViridianCity_Primer_Npc::
lock
faceplayer
msgbox NeoViridianCity_Primer_Npc_Texto_1 MSGBOX_NPC
release
end

NeoViridianCity_Primer_Npc_Texto_1:
	.string "I heard that there are many items on\n"
	.string "the ground in VIRIDIAN FOREST.$"



NeoViridianCity_Segundo_Npc::
lock
faceplayer
msgbox NeoViridianCity_Segundo_Npc_Texto_1 MSGBOX_NPC
release
end

NeoViridianCity_Segundo_Npc_Texto_1:
	.string "I heard that there are many items on\n"
	.string "the ground in VIRIDIAN FOREST.$"



NeoViridianCity_Tercer_Npc::
lock
faceplayer
msgbox NeoViridianCity_Tercer_Npc_Texto_1 MSGBOX_NPC
release
end

NeoViridianCity_Tercer_Npc_Texto_1:
	.string "I heard that there are many items on\n"
	.string "the ground in VIRIDIAN FOREST.$"

NeoViridianCity_Anciano::
lock
faceplayer
msgbox NeoViridianCity_Anciano_YesNo_Texto_1,MSGBOX_DEFAULT
msgbox NeoViridianCity_Anciano_YesNo_Texto_2,MSGBOX_DEFAULT
msgbox NeoViridianCity_Anciano_YesNo_Texto_3, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq NeoViridianCity_Anciano_No
msgbox NeoViridianCity_Anciano_Yes, MSGBOX_DEFAULT
release
end

NeoViridianCity_Anciano_YesNo_Texto_3:
.string "Do you believe me?$"

NeoViridianCity_Anciano_YesNo_Texto_2:
	.string "I need to talk to someone, so you'll\n"
	.string "have to do! I might not look like much\l"
	.string "now, but I was an expert at catching\l"
	.string "POKÉMON.$"



NeoViridianCity_Anciano_YesNo_Texto_1:
	.string "Hey, kid! I just had a double shot of\n"
	.string "espresso, and I am wired!$"



NeoViridianCity_Anciano_No::
msgbox NeoViridianCity_Anciano_No_Texto_1, MSGBOX_DEFAULT
release
end

NeoViridianCity_Anciano_No_Texto_1:
	.string "What? You little whelp! If I were just a\n"
	.string "bit younger, I'd show you a thing or two.\l"
	.string "Humph!$"


NeoViridianCity_Anciano_Yes:
	.string "Good, good. Yes, I was something out of\n"
	.string "the ordinary, let me tell you!$"

NeoViridianCity_Anciano_Gym::
lock
faceplayer
msgbox NeoViridianCity_Anciano_Gym_Texto_1 MSGBOX_NPC
release
end

NeoViridianCity_Anciano_Gym_Texto_1:
	.string "This GYM didn't have a LEADER until\n"
	.string "recently. A young man from PALLET\l"
	.string "became the LEADER, but he's often away.$"


