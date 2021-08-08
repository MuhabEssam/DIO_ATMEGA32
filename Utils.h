#ifndef UTILS_H_
#define UTILS_H_
#define SETBIT(PORT,BIT) PORT |=(1<<BIT) // Set BIT to one
#define CLEARBIT(PORT,BIT) PORT &=~(1<<BIT) // Set BIT to Zero
#define TOGGLEBIT(PORT,BIT) PORT^=(1<<BIT) // Toggle bit from 1 to 0 and vice versa
#define GETBIT(PORT,BIT) ((PORT>>BIT)&1) // Return the value of bit
#define SETBITVALUE(PORT,BIT,VALUE) (VALUE==1)?(PORT |=(1<<BIT)):(PORT &=~(1<<BIT)) // Set BIT value
#endif /* UTILS_H_ */
