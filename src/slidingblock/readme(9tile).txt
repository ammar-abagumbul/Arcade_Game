For this level of the game, you have to solve a jumbled up 8 tile puzzle.

Rearrange the tiles so the board returns to its original form:

+-----+-----+-----+
|  1  |  2  |  3  |
+-----+-----+-----+
+-----+-----+-----+
|  4  |  5  |  6  |
+-----+-----+-----+
+-----+-----+-----+
|  7  |  8  |  0  |
+-----+-----+-----+

0 represents an empty tile. You rearrange the tiles by moving any tile adjacent to the empty tile.

For example, if you input "w" or "W" when there is a number tile below the empty tile, you can move that number tile up, as shown:

+-----+-----+-----+
|  6  |  0  |  5  |
+-----+-----+-----+
+-----+-----+-----+
|  1  |  2  |  4  |
+-----+-----+-----+
+-----+-----+-----+
|  8  |  3  |  7  |
+-----+-----+-----+

// user inputs "w" or "W"

+-----+-----+-----+
|  6  |  2  |  5  |
+-----+-----+-----+
+-----+-----+-----+
|  1  |  0  |  4  |
+-----+-----+-----+
+-----+-----+-----+
|  8  |  3  |  7  |
+-----+-----+-----+

This same logic applies to the 3 other directions.

Input Guide:

Input "w" or "W": Move a tile directly below the empty tile one tile upwards.

Input "s" or "S": Move a tile directly above the empty tile one tile downwards.

Input "a" or "A": Move a tile directly to the right of the empty tile one tile leftwards.

Input "d" or "D": Move a tile directly to the left of the empty tile one tile rightwards.




