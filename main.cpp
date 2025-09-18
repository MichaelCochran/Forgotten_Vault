//
//  main.cpp
//  Forgotten_Vault
//
//  Created by Michael Cochran on 9/17/25.
//

#include <iostream>
#include <cctype>
#ifdef _WIN32
    #include <conio.h>
#else
    #include <termios.h>
    #include <unistd.h>
#endif

void clearScreen() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void waitForEnterKey() {
    std::cout << "Press Enter to continue...";
    std::cin.ignore();
}

char getKey() {
    char ch;
    std::cin >> ch;
    return std::tolower(ch);
}

void printOffset(const std::string& text, int row = 5) {
    // Move cursor to specific row, column 1
    std::cout << "\033[" << row << ";1H";
    
    // Simple indentation - works consistently across terminals
    std::cout << "\t" << text << std::endl;
}

bool askPlayAgain() {
    std::cout << "\n\nPlay again? (y/n): ";
    while(true) {
        char choice = getKey();
        switch(choice) {
            case 'y':
                std::cout << std::endl << "\n";
                return true;
            case 'n':
                std::cout << std::endl << "\n";
                return false;
            default:
                break; // Invalid - keep looping
        }
    }
}

char beginning(){
    clearScreen();
    std::cout << "You stand in Greenhollow, a small village cradled by rolling hills and thick forests. The sun dips below the horizon, painting the sky blood-orange. The ground trembles underfoot, a low vibration that makes the lantern in your hand quiver. Dogs bark nervously, and shutters slam against the wind. Whispers fill the air: 'The vault awakens.'\n\n";
    std::cout << "Investigate the tremors or Stay home? ";
    while(true) {
        char choice = getKey();
        switch(choice) {
            case 'i':
            case 's':
                std::cout << std::endl << "\n";
                return choice;
            default:
                break; // Invalid - keep looping
        }
    }
}

char crackedHill(){
    clearScreen();
    std::cout << "At the base of the hill, the fissure splits the earth like a jagged wound. Steam rises from hidden vents, carrying the scent of sulfur. Strange glyphs are etched along the rock edges, glowing faintly. A breeze whispers through the chasm, carrying voices that seem almost human.\n\n";
    std::cout << "Enter the fissure or Report to the village elder? ";
    while(true) {
        char choice = getKey();
        switch(choice) {
            case 'e':
            case 'r':
                std::cout << std::endl << "\n";
                return choice;
            default:
                break; // Invalid - keep looping
        }
    }
}

char cavernOfCarvings(){
    clearScreen();
    std::cout << "The cavern opens into a high, echoing chamber. Ancient murals show hooded figures offering keys to a massive stone door, guarded by a creature you cannot fully see. Stalactites drip slowly, each drop ringing like a bell. Faint, shimmering dust floats in the air, casting ghostly patterns. Three tunnels branch off ahead, each disappearing into darkness.\n\n";
    std::cout << "Take Left Tunnel, Center Tunnel, or Right Tunnel? ";
    while(true) {
        char choice = getKey();
        switch(choice) {
            case 'l':
            case 'c':
            case 'r':
                std::cout << std::endl << "\n";
                return choice;
            default:
                break; // Invalid - keep looping
        }
    }
}

char chamberOfEchoes(){
    clearScreen();
    std::cout << "This room is enormous, with walls of polished stone reflecting your lantern in hundreds of copies. The ceiling vanishes into darkness. Whispering voices seem to come from nowhere and everywhere. A riddle is carved in glowing runes: \n 'I am not alive, yet I grow. I have no mouth, yet I roar. What am I?'\n\n";
    std::cout << "Answer Fire, River, or Wind? ";
    while(true) {
        char choice = getKey();
        switch(choice) {
            case 'f':
            case 'r':
            case 'w':
                std::cout << std::endl << "\n";
                return choice;
            default:
                break; // Invalid - keep looping
        }
    }
}

char guardiansTest(){
    clearScreen();
    std::cout << "At the base of the stairs, a stone guardian rises. Its massive form towers over you, eyes glowing crimson. The stone smells faintly of ozone, like before a storm. It does not speak but radiates awareness.\n\n";
    std::cout << "Attack with lantern, sneak Past, or Speak to it? ";
    while(true) {
        char choice = getKey();
        switch(choice) {
            case 'a':
            case 'p':
            case 's':
                std::cout << std::endl << "\n";
                return choice;
            default:
                break; // Invalid - keep looping
        }
    }
}

char forgottenVault(){
    clearScreen();
    std::cout << "The vault door is immense, carved from black stone. Three pedestals stand in front: a Dagger of obsidian, a crystal Sphere, and an iron Key. Faint lines of glowing runes connect them to the door. The air hums with potential energy; dust swirls in strange, unpatterned currents.\n\n";
    std::cout << "Which relic do you choose? ";
    while(true) {
        char choice = getKey();
        switch(choice) {
            case 'd':
            case 'k':
            case 's':
                std::cout << std::endl << "\n";
                return choice;
            default:
                break; // Invalid - keep looping
        }
    }
}

char innerSanctum(){
    clearScreen();
    std::cout << "You step into a vast hall. Piles of treasure glimmer around the edges. In the center is a chained black obelisk, pulsing like a heartbeat. Whispers swirl in your ears, urging release. Shadows dance across the walls. The scent of ancient dust mixes with ozone and something acrid.\n\n";
    std::cout << "Free, Take treasure, Seal further? ";
    while(true) {
        char choice = getKey();
        switch(choice) {
            case 'f':
            case 't':
            case 's':
                std::cout << std::endl << "\n";
                return choice;
            default:
                break; // Invalid - keep looping
        }
    }
}

int main() {
    do {
        std::string choice;
        
        clearScreen();
        printOffset("The Forgotten Vault", 5);
        printOffset("A Text Adventure", 6);
        std::cout << "\n\n\n";
        waitForEnterKey();
        
        char choice1 = beginning();
        
        if (choice1 == 'i') {
            clearScreen();
            std::cout << "You step into the dusk, leaves crunching underfoot. The forest smells of damp earth and pine resin. In the distance, a faint blue glow emanates from the hills.\n";
            
            char choice2 = crackedHill();
            
            if (choice2 == 'e') {
                clearScreen();
                std::cout << "You descend carefully. The rock is slick and cold. Bioluminescent mushrooms illuminate the passage. Shadows twist like living things along the walls.";
                
                char choice3 = cavernOfCarvings();
                
                if (choice3 == 'r') {
                    clearScreen();
                    std::cout << "A safe passage, though the air is damp and musty. Faint carvings suggest previous explorers tried this route.";
                    
                    char choice4 = chamberOfEchoes();
                    
                    if (choice4 == 'f') {
                        clearScreen();
                        std::cout << "The walls glow warmly. Mirrors slide aside, revealing a stair leading downward. Heat from unseen torches brushes your face.";
                        
                        char choice5 = guardiansTest();
                        
                        if (choice5 == 's') {
                            clearScreen();
                            std::cout << "You notice mushrooms you passed earlier glow softly. Placing one at its feet calms the guardian. It bows and steps aside.";
                            
                            char choice6 = forgottenVault();
                            
                            if (choice6 == 'k') {
                                clearScreen();
                                std::cout << "The door rumbles open, revealing a hall glowing with soft light.";
                                
                                char choice7 = innerSanctum();
                                
                                if (choice7 == 's') {
                                    clearScreen();
                                    std::cout << "The iron key trembles in your hand as you press it into the lock on the obelisk’s chains. At first nothing happens. Then, with a deep, resonant hum, the chains tighten. The obelisk shudders violently, its pulse flickering like a dying heart. Whispers rise into a furious chorus: “You cannot hold me… not forever…” The air grows sharp with ozone, burning your lungs.\n";
                                    std::cout << "The cavern shakes, stalactites crashing around you, but you stand firm. One by one, the whispers fade into silence. The last glow drains from the obelisk until it is nothing but cold, black stone. The ground steadies. The vault grows still.\n";
                                    std::cout << "For a long moment, the silence is unbearable. Then you realize: you have done it. The tremors stop. The earth is at peace.\n";
                                    std::cout << "You make your way back up through the winding tunnels, the lantern sputtering but holding. When you finally emerge from the fissure, dawn is breaking. Golden sunlight spills across the hills, washing away the night’s shadows. Birds sing again. The air smells of pine and morning dew, not sulfur and ash.\n";
                                    std::cout << "Back in Greenhollow, villagers crowd around you. Some cheer, others stare in disbelief. Children cling to their mothers’ skirts, whispering about “the one who went into the hill.” The elder approaches slowly. For the first time, his eyes are not skeptical but reverent.\n";
                                    std::cout << "“The Vault was never meant to be plundered,” he says gravely. “It was meant to be guarded. And tonight, you have carried that burden.”\n";
                                    std::cout << "He bows his head to you. Soon, the whole village follows.\n";
                                    std::cout << "Weeks later, life in Greenhollow returns to normal — almost. The tremors cease, and the fissure closes, as if it were never there. Fields grow lush again, and children laugh without fear. But sometimes, in the dead of night, you dream of the obelisk. You hear its faint pulse deep underground. You wonder: did you seal it forever, or merely delay the inevitable?\n";
                                    std::cout << "The villagers call you a hero. Yet in your heart, you know the truth: the story of the Vault is not over.\n";
                                    std::cout << "You have survived where others would not. You sealed away the darkness, restored peace to Greenhollow, and lived to tell the tale. But the whispers remind you — legends never end. They wait.";
                                }
                                
                                else if (choice7 == 'f') {
                                    clearScreen();
                                    printOffset("Herald of Doom – releasing evil brings catastrophic consequences.", 5);
                                    std::cout << "Chains dissolve under your hands. The obelisk shudders and cracks. A flood of black smoke and shadow erupts. Whispers hiss your name. The cavern quakes violently; rockfalls and debris rain from above. The shadows surge outward, consuming light, hope, and life. Your vision fades as a tide of darkness sweeps the world into oblivion.";
                                    
                                    if (!askPlayAgain()) return 0;
                                }
                                
                                else if (choice7 == 't') {
                                    clearScreen();
                                    printOffset("Consumed by Greed – avarice awakens what should sleep.", 5);
                                    std::cout << "The glittering treasure tempts you. You scoop up gold and jewels, ignoring the pulsing obelisk. Shadows curl from the black stone. The chains snap with a deafening crack. The obelisk erupts in a wave of darkness, incinerating treasure and adventurer alike. Only scorched stone and silence remain.";
                                    
                                    if (!askPlayAgain()) return 0;
                                }
                            }
                            
                            else if (choice6 == 's') {
                                clearScreen();
                                printOffset("Lost to Illusion – curiosity without caution traps the unwary.", 5);
                                std::cout << "The sphere swirls with mist. As you place it, the floor seems to vanish. Walls twist unnaturally. You stumble into corridors that curve impossibly, spiraling over and under themselves. Hours, days, perhaps years pass as the illusions toy with your mind. Hunger gnaws, but you cannot escape the labyrinth.";
                                
                                if (!askPlayAgain()) return 0;
                            }
                            
                            else if (choice6 == 'd') {
                                clearScreen();
                                printOffset("The Blood Price – temptation has consequences.", 5);
                                std::cout << "The dagger feels unnervingly warm. When you place it into the pedestal, the vault hums and dark tendrils of shadow coil around your body. The air grows thick, metallic, like blood. Your vision fades as life drains from you, feeding the vault’s insatiable hunger.";
                                
                                if (!askPlayAgain()) return 0;
                            }
                        }
                        
                        else if (choice5 == 'a') {
                            clearScreen();
                            printOffset("Crushed by Pride – aggression against forces beyond understanding is fatal.", 5);
                            std::cout << "You swing your lantern wildly. Sparks fly across the guardian’s stone chest, but it barely reacts. A single movement, faster than you can track, brings its massive hand crashing down. The force sends you sprawling, and the world turns to darkness in an instant.";
                            
                            if (!askPlayAgain()) return 0;
                        }
                        
                        else if (choice5 == 'p') {
                            clearScreen();
                            printOffset("Caught in the Shadows – stealth fails against ancient vigilance.", 5);
                            std::cout << "You hug the wall, breathing shallowly, every heartbeat loud in your ears. For a moment, it seems successful, until the guardian’s eyes snap open like red coals. One step and a colossal arm sweeps down. You are hurled into jagged rocks. Darkness overtakes you as the hall echoes with the crash.";
                            
                            if (!askPlayAgain()) return 0;
                        }
                    }
                    
                    else if (choice4 == 'r') {
                        clearScreen();
                        printOffset("The Endless Fall – a simple misstep can lead to eternal plummet.", 5);
                        std::cout << "You answer aloud. The ground beneath trembles violently. A jagged crack opens, swallowing you into a deep, unlit chasm. Echoes of your scream bounce off invisible walls as you fall endlessly. No hand, rope, or ledge appears to save you.";
                        
                        if (!askPlayAgain()) return 0;
                    }
                    
                    else if (choice4 == 'w') {
                        clearScreen();
                        printOffset("Swept Away – misjudging the riddle’s truth is deadly.", 5);
                        std::cout << "You speak the word, and the mirrors shudder. Whirling gusts whip your hair and snuff out your lantern. Water bursts from hidden cracks, filling the floor. You try to flee, but the current sweeps you into a swirling pool that drags you under. Whispers laugh as you are pulled into the depths.";
                        
                        if (!askPlayAgain()) return 0;
                    }
                }
                
                else if (choice3 == 'c') {
                    clearScreen();
                    printOffset("The Venomous Path – the wrong path is sometimes fatal.", 5);
                    std::cout << "A hissing echoes through the tunnel. Golden eyes glint from the darkness. Snakes writhe across the floor and walls, their scales glimmering in the faint blue light. Before you can retreat, they strike with lightning speed. Pain burns, venom courses through your veins, and the world fades into cold darkness.";
                    
                    if (!askPlayAgain()) return 0;
                }
                
                else if (choice3 == 'l') {
                    clearScreen();
                    printOffset("Buried Alive – curiosity can be a dangerous guide.", 5);
                    std::cout << "The passage narrows rapidly, forcing you to crawl over jagged rocks. Stalactites drip steadily, each drop sounding like a drumbeat in the still air. Halfway through, the walls shudder violently. A rockfall traps you. Darkness presses in from all sides. Your lantern’s light dies, and you are left alone in the cold, silent tomb.";
                    
                    if (!askPlayAgain()) return 0;
                }
            }
            
            else if (choice2 == 'r') {
                clearScreen();
                printOffset("The Path Untaken – courage delayed often leads to regret.", 5);
                std::cout << "You run through winding village streets, the lantern shaking your grip. The elder’s hut smells of herbs and wood smoke. He chuckles, dismissing your warnings as superstition. By morning, when you rush back to the fissure, the earth has healed as if it were never broken. You are left only with the echo of your hesitation, and the knowledge that the adventure has passed you by.";
                
                if (!askPlayAgain()) return 0;
            }
        }
        
        else if (choice1 == 's') {
            clearScreen();
            printOffset("A Life Unchanged – safety is sometimes the greatest risk of all.", 5);
            std::cout << "You shrug off the tremors, assuming it’s a passing storm. Inside, the fire flickers and casts jittering shadows on the walls. The floor suddenly shakes violently. Dust falls from the ceiling. A deep rumble grows into a deafening roar as the ground cracks beneath your bed. You fall into a dark abyss, the air thick with dirt and smoke. Outside, the village collapses into a massive sinkhole. Only darkness remains.";
            
            if (!askPlayAgain()) return 0;
        }
    
    } while (true);
    
    return 0;
}
