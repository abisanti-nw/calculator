# Starter code
def calculator_with_undo():
 result = 0
 history_stack = [] # Store previous results
 
 while True:
   print(f"Current result: {result}")
   action = input("Enter 'add [number]', 'subtract [number]', 'undo', or 'quit': ").split()
   
   if action[0] == "add":
     # Task: Save current result, then add number
     history_stack.append(result) # Save current state
     result += int(action[1])
   
   elif action[0] == "subtract":
     # Task: Save current result, then subtract number
     pass # Fill this in
   
   elif action[0] == "undo":
     # Task: Restore previous result
     pass # Fill this in
     
   elif action[0] == "quit":
     break
