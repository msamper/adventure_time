#include <iostream>
#include <string>
using namespace std;

class Plot{
public:
  string text[200] = {"In the small town of LilyPond, in the town center, you are about to be set \non the quest of your life.",
      "\n\nA courier rides into the middle of the town square announcing to all that can hear. You gather \naround the courier with the rest of the citizens in the area. The courier exclaims \"Hear Ye! Hear \nYe! The king Jonathan Liu has put a 10,000 gold bounty on the head of the dragon that has \nbeen terrorizing Samperville. Any brave soul that finds themselves capable of the task is \nwelcome to attempt this feat. 500 gold will be given in order to pay for equipment.\"",
      "\n\nWhat would you like to do?\n\t1: Accept the bounty\n\t2: Ask for more information\n\t3: Ask for more gold (chance)",
      "\n\nCourier: \"Excellent, Here is your gold. I would advise that you visit \nyour local shop and then depart immediately. Upon your arrival in Samperville visit the \ncourier’s outpost near the town hall. Good luck.\" The courier rides off, leaving you to prepare for \nyour quest.",
      "\n\nCourier: \"It has been 2 fortnights since the dragon attacks started in Samperville. \nThe drake has made its nest on the Golden Mountain just north of there. It is a \nperilous journey fraught with danger. Also several members of the nobility have gone missing \nand while I can’t offer you anything I’m sure they would reward you handsomely should you find \nand help them.\"",
      "\n\nWell since you are the only person from your town that accepted, I suppose I \ncan give you 750 gold should you accept.",
      "\n\nDon't be greedy, 500 gold is plenty to supply you for the quest ahead.",
      "\n\nYou are standing in the middle of the town square. You are standing by a cobblestone well that \nstands in the middle of town square facing the rather dilapidated general store that your family \nfriend has run for as long as you can remember.",
      "\n\nWhat would you like to do:\n\t1: Make a wish in the well \n\t2: Visit the general store",
      "\n\nYou toss a coin into the well, wishing for a successful journey ahead. The sound of the coin \nsinking in the water makes you feel more confident in your ability to complete your goal.",
      "\n\nYou enter the old building and see the familiar face of Caleb Robey. Seeing you \ncome in, they greet you and ask \"Did you really accept that death warrant?\"\n\t1: Yes\n\t2: No",
      "\n\nYou’re crazy kid, I don’t have much but here’s 50 gold to help with whatever you might need.",
      "\n\nDon’t lie to me, I saw you take that money out there. I just hope you know what you’re doing.",
      "\n\nNow, What do you need?\n",
      "\n\n\"Good luck! I hope I’ll see you in one piece again. Oh and visit that old bakery Bittel's Bread \nthat your father and I used to go to back when we were traveling, if it’s still standing that is.\"",
      "\n\nHaving decided that you are well enough equipped to handle the journey ahead, you set forth \nfor Samperville, in the hopes of finding the dragon or resupplying before your trip to its \nnest. You leave through the east gate of the town, leaving everything you know behind.\n\nA few hours into your journey you notice two wolves devouring some newly conquered prey, and \nwhile they won’t fight you unless provoked, you feel as though this may be a good chance to test \nyour skills.",
      "\n\nWhat would you like to do:	\n\t1: Fight the wolves	\n\t2: Continue on the path",
      "\n\nContinuing on your path you notice a cart that was run of the path and crashed into a tree. \nYou realize that the horse pulling this cart was most likely the victim of the two wolves you just \nencountered.",
      "\n\nWhat would you like to do:\n\t1: Investigate the cart\n\t2: Continue on the path",
      "\n\nUpon Investigating the cart you find 20 gold as well as noticing footprints leading down a \nrecently beaten path into the forest.",
      "\n\nWhat would you like to do:\n\t1: Go down the new path\n\t2: Continue on the current path",
      "\n\nAfter a few more hours of travel you notice that it is getting dark and the sky looks as though it \nmay storm. You realize that you need to make camp soon.",
      "\n\nAfter a few minutes of walking down the path you are already cut from the thorns that have \nnot been well beaten down. As you consider turning back, you notice several men have made \ncamp at the base of a large tree and you also notice that there is someone in the tree.\n\nUnsure of the situation you slowly approach the scene, attempting to remain undetected. \nYou hear one of the men on the ground shout \"Come on Scott, it’s been hours \nand you have to come down eventually.\" You recognize the name to be a member of the nobility \nin the area and realize that the men below are armed and are most likely bandits.",
      "\n\nWhat would you like to do:\n\t1: Openly engage the bandits\n\t2: Sneak up on the bandits (chance)\n\t3. Sneak around to avoid the scene (chance)",
      "\n\nAfter defeating the bandits, the person that they had chased up the tree came down. He was an astonishingly handsome asian.\n\n\"Thank you for killing those bandits, I was afraid that no one would come. \nThis group has been chasing me around these woods for days, and after I lost my cart they \nchased me up that tree. Thank you for your help. Here take this 150 Gold that I have with me. \nI’m sorry that I can’t offer you more. I overheard that bandits mention that the path to Samperville\n is just over this hill. I wish you the best of luck.\n\nScott Liu departs down the path that you came from, on their way back to Lilypond.\n\nFollowing the instructions given, you find your way back to the path and continue on your way.",
      "\n\nYou sneak past and over the hill that bordered the other side of the scene. Once on the other \nside you notice that the path to Samperville is only a short distance away.",
      "\n\nAs you continue on your path you notice that it is getting dark and the sky looks as though it \nmay storm. You realize that you need to make camp soon.",
      "\n\nYou arrive at the base of a small mountain. There is a rock formation that could provide you \nshelter from the inclement weather and a clearing about about fifty yards further along the path.\n\nWhat would you like to do:\n\t1: Make camp at the rock formation\n\t2: Make camp at the clearing",
      "\n\nYou decide to make camp at the rock formation. You notice a blackberry bush with enough \nberries to fulfill your appetite for the night. You gather firewood and start a fire, preparing for a \nstormy night.\n\nYou awake suddenly not sure at all where you are, a bad headache that you are fairly certain is \nfrom being clubbed over the head.\n\nBefore you can even get your balance, a horde of goblins engages you.\n",
      "\n\nYou decide to continue to the clearing to make camp. There isn’t much available for food \nbut you manage to find some wild berries to sate your hunger. You gather firewood and start a \nfire, hoping that it won’t storm.\n\nIt begins to storm badly and you run back to the rock formation for shelter. However, upon running \nunder the rock, a trapdoor opens and you fall into a dungeon.\n\nYou manage to land on your feet but a horde of goblins quickly engage you.",
      "\n\nUpon defeating the wave of goblins, you realize that there may be more goblins than you can \nhandle.",
      "\n\nWhat would you like to do:\n\t1: Continue fighting\n\t2: Attempt to negotiate",
      "",
      "\n\nYou raise your hands to signal surrender and ask to speak to who’s in charge. Upon \nasking, a large goblin being carted in on a litter, is set down in front of you. The goblin king \naddresses you, \"I think this situation we can mend, if you’ll simply turn over your friend.\" You \nwonder who he’s talking about, and turning around you realize that you’ve actually been holding \noff the goblins from attacking the person hiding in the corner behind you. “They are our true foe, \nshould you comply, we’ll simply let you go.\"\n\nWhat would you like to do:\n\t1: Accept the offer\n\t2: Negotiate for the release of the other person",
      "\n\nAccepting their offer, the goblins escort you out of the cave but you wonder about the fate \nof the other person.",
      "\n\n\"If it’s them you want to save, from what is surely a grave, then it only fits, that we \nhave a game of wits. Should you correctly answer two of my riddles three, then I will set both of \nyou free.\"\n\nAlbeit annoyed by the rhyming you accept the challenge.",
      "\n\nThe first riddle is given\n\"It cannot be seen, cannot be felt,\nCannot be heard, cannot be smelt.\nIt lies behind stars and under hills,\nAnd empty holes it fills.\nIt comes first and follows after,\nEnds life, kills laughter\"\n\nOne word answer (all lower case): ",
      "\n\nThe second riddle is given\n\"A box without hinges, key or lid,\nYet golden treasure inside is hid\"\n\nOne word answer(all lower case): ",
      "\n\nThe third riddle is given\n\"This thing all things devours:\nBirds, beasts, trees, flowers;\nGnaws iron, bites steel;\nGrinds hard stones to meal;\nSlays king, ruins town,\nAnd beats high mountain down.\"\n\nOne word answer (all lower case): ",
      "\n\n\"Alas, you could not correctly answer two of my riddles three, \nso it is only you that shall go free.\" The goblins escort you from the cave and you try to focus on \nthe task at hand rather than think of the fate of the other person.",
      "\n\n\"You are truly wise, for of the riddles I could devise, they could not best you, \nand for this stranger you came through. Leave this place now, my servants will show you how.\" \nThe goblins escort you and the stranger outside of the cave and then go back inside.",
      "\n\nYou ask the stranger and they reply Luis Carbonell. You recognize the name to be one \nof the members of the nobility. \"Thank you so much for your help. I surely would have been \nkilled had you not been there. I had escaped their prison but could not find the way out, I’ve \nbeen hiding for days in that cave. Here take this gold that I found while I was hiding. I \nhope I can thank you more properly someday.I can find my way back to town, I \ndon’t want to inconvenience you anymore than I already have.\" Luis then walks away as \nyou focus on your original quest.",
      "\n\nHappy to have rid yourself of the goblins, you still have to figure out how to get back to the \npath. You notice a large cart moving at the base of the mountain. You notice that it is a merchant \ncart and think that you can probably buy equipment from them and ask for directions.\n\nWhat would you like to do:\n\t1: Approach the cart\n\t2: Climb the mountain in hopes of seeing the path over the trees ",
      "\n\nYou climb up the mountain and watch the cart fade into the distance. You can see for miles \nin all directions and you locate the path, a few hundred yards to the north of your location. You \nmake your way down the mountain and head toward the path. After several hours of travel you \nmake it to Samperville.",
      "\n\nYou approach the cart and notice that the driver has an amulet on that you recognize as \nthe amulet that most nobility is given by the king. As you approach the driver greets you. \"Hello \ntraveler! Are you interested in buying some of my wares?\"",
      "\n\nWhat would you like to do:\n\t1: Buy items\n\t2: Ask for directions\n\t3: Investigate the inside of the cart\n\t4: Inquire about the amulet",
      "\n\nThe driver seems taken back by the question and struggles to answer. \"It was a… gift… \nfrom my grandfather. It’s been passed down for generations.\" The driver glances to the back of \nthe cart which makes you suspicious.",
      "\n\n\"I’m heading to Samperville as well, you can ride the rest of the way with me. Climb \non board and we’ll be off\"",
      "\n\nAfter a few hours of riding you arrive at Samperville. \"Well, here we are. The \nride was a pleasure. You don’t owe me anything for the ride but I will ask again if you’d like to \npurchase any of my wares.\"\n\t1: Shop\n\t2: Continue",
      "\n\nYou make your way to the back of the cart and before the driver can stop you, you notice a \nsack that seems to be moving. Before you can search the back you feel the cold steel of a \ndagger piercing your back. You turn to face your assailant and realize that the \ncarriage driver is your foe.",
      "\n\nAfter defeating the carriage driver you hear a thump as the aforementioned \nsack rolls of the cart and onto the ground. You walk over to untie the sack and no sooner than \nyou untie it does a person emerge from the sack. In an oddly jovial manner for someone who \nhad clearly been kidnapped, the stranger greets you, \"Hello! The name is Trevor Yovaish. I \ncan’t thank you enough for saving me from my captor. He seemed very interested in my \namulet… and my cart for that matter. I can tell you’ve been traveling for while, you must be \ngoing to Samperville. Let me take you the rest of the way. I won’t take no for an answer.\"\n\t1: Yes\n\t2: Yes\n\t3: Yes",
      "\n\nAfter a few hours of riding you arrive at Samperville. \"Well, here we are. The \nride was a pleasure. You don’t owe me anything for the ride in fact keep the amulet and take \n100 gold. I will ask if you want to purchase any of what are actually my wares, not \nthat brute who previously tried to sell you my things.\"",
      "\n\nWhat would you like to do: \n\t1: Shop\n\t2: Leave for town",
      "\n\n\"I wish you the best of luck in all of your endeavors! Also be careful, a massive dragon has \nbeen terrorizing this town recently, there’s no telling when it could come back.\" Trevor rides away \ninto town leaving you amulet in hand, preparing yourself to potentially fight the dragon and finish \nthe quest you’ve undertaken.",
      "\n\nYou enter through what remained of the west gate of the town. You are happy to be on the \npaved ground rather than the dirt roads. As you walk into town you try to compare what you’ve \nheard about this town with what you see. The bakery that produced the pastries that you so \nenjoyed when your father would bring them back from visiting the city, is nothing but a charred \nshell of a building that can barely read Bittel's Bread. The afamed town hall is still in blazes \nand citizens are trying their best to quell the flames. You notice that the courier’s outpost that \nyou need to visit is burned but more intact than most buildings in the area.",
      "\n\nWhat would you like to do:\n\t1: Head to the courier’s outpost\n\t2: Assist the citizens with the fire\n\t3: Investigate the bakery",
      "\n\nAmidst the rubble you find a charred note, you can’t make out most of the note but you can still \nread some of it.\n\"About your previous request, should you want anymore information, give the beggar north of \ntown 27 gold. He knows more than you would think.\"",
      "\n\nAs you approach the scene a woman runs up to you and shouts \"Please help! Someone is \nstill inside the town hall!\"\n\t1: Help\n\t2: Go to courier's outpost",
      "\n\nThe woman quickly runs off to try to find someone else to help as you make \nyour way to the courier’s outpost",
      "\n\nYou run into the town hall and notice that debris is falling quickly from the \nceiling and see that someone is trapped underneath a large beam. Running over to them \nyou see that they’re unconscious. You try to move the beam and it only moves slightly. \nYou realize that if you stay for much longer that you’ll face the same fate.\n\t1: Attempt to move the beam (chance)\n\t2: Run out of the building",
      "\n\nYou shove the beam off of the unconscious individual and carry them out of the \nbuilding. The woman who asked for your help rushes over to see if everything is ok. \nThey shake the person awake and coughing up ash the person comes to. Once they \nhave time to compose themselves they address you, \"The name is Maxwell Fresonke, \nthank you for savin....COUGH COUGH\" After a violent fit of coughing they continue. \n\"Thank you for saving me. I was trying to search the rest of the building when that beam \nfell on me./” Maxwell then walked away leaning on the concerned woman. You \nthen make your way to the courier’s outpost to continue your quest.",
      "\n\nWith a large shove you manage to move the beam but not \nenough to retrieve the person. The heat and smoke is starting to get to you.",
      "\n\nYou decide that you won't be able to save the person in time and run out \nof the building. You explain to the woman that there was nothing that you could do and \nthen you make your way to the courier’s outpost.",
      "\n\nAs you walk in you notice that there are several holes in the roof caused by debris \nfrom the neighboring buildings. You’re surprised that this building didn’t take as much damage. \nYou see a frustrated man sweeping up the ash and debris on the floor. You approach him.\n\n\"What do you want? Can't you tell I'm busy?\"\n\t1: Ask about what happened\n\t2: Show him the bounty letter",
      "\n\n\"The dragon tore through town again. It barely gave us any time to recover since \nthe last attack. The beast took a pretty nasty gash to its side when it collided with the town hall. \nHopefully that will give us time to prepare for the next attack. We really need someone to handle \nthis monster.\"",
      "\n\n\"Fantastic. I’m glad to see that someone finally accepted that bounty. The \ndragon makes its nest in a cave near the top of the Golden mountain. Its attacks have \nbeen getting more frequent. If we don’t handle this problem soon, this town will be totally destroyed. \nI’ve been told to give you this.\"",
      "\n\n\"You should leave by the gate north of town, or at least whatever’s left of it. There is a shop \nright next to it that you can re-equip at before you leave. Good Luck.\"",
      "\n\nThe man sees you out of the outpost and resumes his task of cleaning. You begin to head for \nthe north gate of town.",
      "\n\nAs you’re walking on your way to the north gate amidst the remains of many buildings, you \nhear the sound of clinking mail behind you. As you turn to face the sound, a man runs into you \nand shoves you to the ground. Rolling to see where the perpetrator went you see him run to the \nside of one of the buildings, gold coins falling from a sack he’s carrying. When he gets to the \nside of the building he jumps into a hole in the ground. Presumably into the sewers.",
      "\n\nJust after this you feel someone pull you up by the back of your armor and stand you up. \nSeveral town guards are now before you.\n\n\"Which way did the thief go?\" The urgency in their voice is clearly conveyed.\n\t1: I'm not sure.\n\t2: He jumped into the hole next to that building. If you hurry you can probably catch him.\n\t3: I'll handle it.",
      "\n\n\"Well tell us if you see him again, have a good day.\" Not totally pleased with yourself \nabout lying to the guards, you continue to the north gate of the city.",
      "\n\n\"Thank you for your help\", \"come on men let’s go\". The guards then jump into the same \nhole. Wishing there was more you could do to help, you continue to the north gate of the city.",
      "\n\nBefore the guards can stop you, you run and jump into the hole yourself. You land in what \nyou hope is ankle deep water but the vile smell would tell you otherwise. Still hearing the thief’s \nfootsteps, you pursue him further into the sewers.",
      "\n\nYou see the thief run through a doorway. You wonder to yourself why there is a door down here.\nNext to the door you can see a ladder that leads up to the surface.\n\nWhat would you like to do: \n\t1: Continue to run after the thief\n\t2: Sneak through the door after the thief\n\t3: Return to the surface",
      "\n\nYou climb up the ladder and return to the surface. You’ve gone a little out of your way but \nyou have no trouble finding your way to the north gate of town.",
      "\n\nYou run through the door and down a narrow hallway before bursting into a surprisingly \nlarge room filled with thieves. Unhappy to see someone unknown in their den they engage you.\n",
      "\n\nYou wait for a moment and then sneak in the door. After going down a narrow hallway you \nnotice that the hallway opens up into a large room. You can overhear the thieves talking.\n\n\"Some fool chased me down here but must have given up and left.\"\n\"Well how much did you score?\"\n\"1000 gold plus some jewels.\"\n\"Good work. Put it in the treasury.\"\n\nWhat would you like to do?\n\t1: Surprise attack the thieves\n\t2: Keep listening",
      "\n\nYou wait for a moment to hear all that there is to hear.\n\"Can you believe that the king is commissioning us to do this?\"\n\"Be quiet! We aren’t supposed to talk about that. You’re a dead man if I hear it again.\"\n\nSilence ensues. When you realize that no more information can be found out, you charge in and \nattack the shocked thieves.",
      "\n\nAfter defeating the thieves you are left alone in their den. There are two bordering rooms to \nthe larger one. You hear a cry for help from the room on the right.",
      "\n\nWhat would you like to do:\n\t1: Investigate the left room\n\t2: Investigate the right room\n\t3: Go back and return to the surface\n",
      "\n\nYou walk to the left room and notice that it is locked and won’t budge. Fortunately it \nappears that the bag the thief was carrying is still on the ground outside. You take the bag and \nfind 1000 gold and jewels. ",
      "\n\nYou go into the right room which appears to be some kind of dungeon. You find that two \npeople are bound and gagged in a cell in the back of the room. You rush over to untie them, \nluckily the cell is unlocked. After untying them and removing the gags they stand up and thank you.\n\n\"Thank you so much. When we were kidnapped from our home we thought we’d never see the \nlight of day again.\"\n\"Our names are Franky Liang and Sanaz Gheibi, unfortunately there is nothing we can give you now to reward you for your service.\"\n\nYou tell them how to get back to the surface and return to the main room.",
      "\n\nYou return to the surface and continue heading for the north gate of town.",
      "\n\nUpon reaching the north gate, you see the shop that the man mentioned as well as a beggar \non the side of the path.",
      "\n\nWhat would you like to do:\n\t1: Approach the beggar\n\t2: Go into the store\n\t3: Leave town",
      "\n\nAs you approach he addresses you. \"Hello kind soul, my name is Annie, I was part of the \nKing’s guard in my day but I’ve since lost my vision, could you spare some gold?\"\n\nHow much would you like to give the beggar? ",
      "\n\nA woman standing at the counter greets you, \"Hello what do you need?\"\n",
      "\n\nWhat would you like to do:\n\t1: Buy\n\t2: Leave",
      "\n\nYou leave the store and return to the north gate",
      "\n\nYou leave the town through the north gate and continue on your quest to slay the dragon. \nThe mountain is only about a day’s journey so you are mentally preparing yourself to fight the dragon.\n",
      "After a few hours walk, you come before the Enigmatic Forest. Seeing as the sun is \nsetting, you start a fire and make camp for the night.\n\n",
  "You awake to the feeling of blazing heat on your face. The fire has engorged to a much \nlarger size than should be naturally possible. As you get up to back away from the heat, the \nfire splits, surrounding you in a fiery ring. A figure in dark robes steps through the flames. \"We \nwill make sure that you will never see your way to the mountain!\" The mage engages you.\n\n",
  "After the encounter, you decide to continue into the forest although you are concerned \nabout the others the the mage spoke of.\n\n",
  "The forest is overgrown and the tree are taller than any you’ve ever seen. After an hour of \nnavigating the forest you come across a river that you need to cross to get to the mountain. \nThe river is shallow enough to wade through and there is a branch that extends over the river \na few yards to your left.\n\n",
  "What would you like to do?\n\t1: Wade through the river\n\t2: Climb over the branch\n\n",
  "As you wade through the river you notice that the water is getting substantially colder, \nand it’s getting very difficult to move. Just as you manage to make it out of the water the river \nfreezes solid. A thick mist sets on the frozen river and a man emerges from the fog in a white \nrobe. “You may have defeated one of us but you surely cannot defeat us all.”  He then \nengages you.",
  "You climb the nearby tree and begin to cross the branch. As you make your way over you \nnotice that it is getting substantially colder. You see the river begin to freeze as you make it to \nthe other side of the river. A thick mist sets on the frozen river and a man emerges from the \nfog in a white robe. \"You may have defeated one of us but you surely cannot defeat us all.\"  \nHe then engages you.\n",
  "Glad that you’ve rid yourself of your assailant, you continue your way into the forest. After \ntwo hours of traversing the foliage, you emerge from the forest onto an open plateau. Only a \nfew more miles and you’ll be at the base of the mountain.\n\nAs you begin walking you notice a figure in the distance. They are standing in the direct path to \nthe mountain but you could probably make your way around without being detected.\n\nWhat would you like to do?\n\t1: Attempt to go around (chance)\n\t2: Approach the individual\n\n",
  "The figure turns and the sky darkens. Thunder claps and lightning strikes the plateau. \nThe figure shouts, \"You may have made it past them but you will not surpass me!\"\n\n",
  "You leave the plateau and finally make it to the base of the mountain. You notice a large \nencampment has been made and seeing the crest of the king on the tents you approach.\n\n",
  "As you enter the encampment a man greets you. \"Hello my name is Sir Andrew, we were \nordered to set up camp here in order to resupply you, should you make it this far. Although \nyou’ll still have to purchase it from us. This is your last chance to get something before your \nfight with the beast.\n\nWhat would you like to do?\n\t1: Buy Items\n\t2: Leave for the mountain.\n\n",
  "As you set out to ascend the mountain a person bumps into you dropping some paper on \nthe ground. They lean down to pick it up and handing it to you states, “I think you dropped this.” \nBefore you can argue they head into the camp. You read the paper and it says the following.\n\n \"Meet me just outside the camp in an hour, I have important information for you concerning your quest.\n\nSincerely,\nTomas Kaknevicius\"\n\nWhat would you like to do?\n\t1: Meet the person first\n\t2: Continue to the mountain\n\n",
  "You decide to meet the person at the requested time and place. They arrive and begin to \ngive you information. \"Listen to me carefully, I had to fake orders from the king to get these \nmen to resupply you. The king does not support you in this quest. You are supposed to fail. I’m \nnot sure why but I’m looking into it further. If you survive and make it back to the King’s \ncastle, can I rely on you as an ally?\"\n\n\t1: Yes \n\t2: I’m not sure \n\t3: No",
  "\"I’m happy to hear it. I am a noble in the king’s court and I will be there when you are. Good luck.\"\n",
  "You begin your ascent of the mountain. The slope is steep but manageable. You near the \nsummit and notice the large cave that must belong to the dragon. As you approach this thought \nis reaffirmed seeing the charred rocks at the mouth of the cave as well as bloodied \nstones.\n\nStanding outside the cave you notice something odd. There are several gears strewn across the \nground outside the cave. You aren’t sure what this means but you don’t have much time to think \nbefore you hear a loud roar coming from the cave. You prepare yourself  for the fight.\n\nWhat would you like to do?\n\t1: Enter the cave\n\t2: Wait\n\n",
  "You steel yourself and feel more prepared for the fight.",
  "you enter the cave, The smell of blood is easily noticed although there is another \npowerful smell that you recognize to be oil. You see a dark shape looming in the shadows. As \nit enters the light you have a shocking revelation. Rather than seeing the shimmering scales \nthat dragons are known for and hearing the deep breathing of a dragon, you see the color of \ncold steel and hear the clinking of metal on metal as the giant creature moves toward you. This \nwas not a dragon, this was a machine made to look like one. You don’t have much time to think \nhowever as the dragon then immediately attacks you.\n",
  "The machine falls to the ground with a loud mechanical clang. Oil being sprayed all over \nthe cave and gears being discarded all over the area. You see the machine start to catch fire \nand realizing the the oil would soon catch, sprint from the cave. As you make it outside you hear \na loud explosion, knocking you to the ground and causing you to roll a few yards down the \nmountain. Although unsure as to the machine’s nature, you defeated it nevertheless. You \nstart your journey for the capital city to claim the bounty from the king.\n",
  "After a few days journey you make it to the castle. Just before the castle gates you \nencounter Tomas again. He asks you if you will ally with him.\n\t1: Yes\n\t2: No",
  "You tell him that you will ally with him and tell him about the dragon’s mechanical nature. \nThis seems to greatly concern Tomas who then says, \"You’re in danger, keep an eye on me \nonce we get in there.\" ",
  "Ok, I understand.” Tomas then runs off.",
  "You then get to the gates and after showing them your bounty letter they let you through. \nYou enter into the throne room. The room is filled with intricate wall murals and more gold than \nyou’ve ever seen in your life.\n\nAs you approach the King, he speaks first. He calls for everyone else to leave the room. As they \nfile out, the person from the camp gives you a concerned glance. Once the doors close and \njust the king and yourself remain, he states,” I wanted to congratulate you on your \nachievement of defeating the dragon. I never thought anyone would be able to defeat my \nmachine.” Astonished at the implications of what the king had just said you prepare yourself \nfor the worst.\n\nThe king continues, \"You see that miserable town of Samperville had recently developed \nsome democratic tendencies, and I found it necessary to create a way to protect my own \ninterests. I offer you a choice though. Join me and receive all the glory of the nobility or \noppose me and die. It is up to you.\" You notice Tomas has quietly slipped into the room.\n\n",
  "What would you like to do?\n\t1: Join the King in ruling the land\n\t2: Call out to Tomas for help\n\n",
  "Before you can say anything, Tomas and 6 others run into the room. You recognize them \nas Sanaz Gheibi, Luis Carbonell, Maxwell Fresonke, Franky Liang,Trevor Yovaish and Scott Liu.\n\n",
  "\"WAIT! That thing is not King Jonathan! It is merely a duplicate!\"\nThe king attacks you but hardly stands a chance as he is unarmed.\n\n",
  "As you defeat him you, he falls to the ground with a heavy thud, not the sound a human \nwould make. Upon further inspection you realize that whatever just attacked you is purely a \nmachine just like the dragon. Just after this, A man who you looked just like the machine you \njust defeated although he is dressed in rags.\n\n",
  "The man addresses you, \"My name is King Jonathan, that thing is a machine of my own \ncreation. I made the dragon and that machine for purely experimental purposes, using my \nrenowned programming skill. However, my own creations turned on me, locking me away for \nover a year.\"",
  "The king walks over, taking his kingly robes back from the machine. You are truly a hero \nand will be rewarded with double whatever you were promised. I would have you as a member \nof mine own nobility if you would accept. I understand if you’d rather return to your \nhome though.\n\n",
  "What would you like to do?\n\t1: Accept the offer\n\t2: Return home\n\n",
  "\"Excellent! We will have a house built for you in the capital immediately. It will be good to have you.\"\n\nYou become a member of the king’s nobility and enjoy all the benefits of it. You invite your old \nfamily friend to live with you and he sets up a very successful store in the capital. You are free \nto do whatever you please.\n",
  "\"I understand. I wish you the best of luck!\"\n\nYou return home and are paraded through town as a hero upon your return. Your renown \ncauses many people to flock to your town, increasing business and causing your family \nfriend’s business to flourish. You are free to do whatever you please.\n",
  "\"Most excellent, Here is your bounty and I’m sure we can find room for you in our court. \nGUARDS!\" He calls in the guards and they take away Tomas. \"Well it looks like room has just \nbeen vacated. You will enjoy all the luxuries of the nobility until your death.\"\n\n\nYou are made a member of the king’s nobility and are exalted as his closest advisor. You are \ngiven a home in the capital and help the king consolidate his power over the region. The \nnobility continue to flourish at the expense of the people. You are free to do whatever you please.\n",
  "You call out for help from the person and they rush to your side. The king calls for the \nguards and you both are quickly outnumbered. You are surrounded and are unable to flee.\n\"We’ll each take half, they don’t stand a chance\"\n",
  "As you defeat the guards the king surrenders as he knows he stands no chance against \nyou. Tomas then addresses you, \"While you know me as a member of this country’s nobility I \nam actually a spy from the country of Java. We heard that the king here was suppressing \ndemocracy and I was sent to investigate. Once my country receives word of the king’s surrender \nthey will move in to assist with the transition to democracy. I can’t thank you enough for your \nhelp. You are still entitled to that bounty by the way.\" ",
  "After this you return to your hometown. You are paraded through town as a hero upon \nyour return. Your renown causes many people to flock to your town, increasing business and \ncausing your family friend’s business to flourish. You are free to do whatever you please.\n"

};
};
