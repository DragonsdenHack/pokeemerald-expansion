PewterCity_House2_MapScripts::
	.byte 0

PewterCityHouse2_1::
lock     
faceplayer     
msgbox PewterCity_House2_Text_1, MSGBOX_DEFAULT
release     
end

PewterCity_House2_Text_1:
.string "POKÉMON learn new techniques as\n"
    .string "they grow.\p"
    .string "But some moves must be taught to\n"
    .string "them by people.$"



PewterCityHouse2_2::
lock     
faceplayer     
msgbox PewterCity_House2_Text_2, MSGBOX_DEFAULT
release     
end

PewterCity_House2_Text_2:
    .string "A POKÉMON becomes easier to \n"
    .string "catch if it has a status problem.\p"
    .string "Sleep, poison, burn, or paralysis…\n"
    .string "Those are all effective.\p"
    .string "But catching POKÉMON is never\n"
    .string "a sure thing!$"
