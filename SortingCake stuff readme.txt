SortingCake stuff
...,
const of object data,
aquiredTime
wieght,
rarity,
value,





...,
Lab 0x11h : Sorting a Hashed Inventory


For this lab you will create an inventory of items for a player in a hypothetical game.
Each item has a rarity level, a value (in gold or whatever currency you want) and a weight in kilos.
The player is supposed to be able to sort their inventory in the following ways:

- most recently acquired item on top, oldest item in bottom
- rarest item on top, most common item in bottom
- most valuable item on top, least valuable item in bottom
- heaviest item on top, lightest item on bottom

The actual inventory should be stored as a hash table where the key to each item is its name of the item and the value is  the number of items carried of that kind.
The item data itself should be stored separately in any data structure of your choice (array, linked list, hash table).

To spice it up, you can try to implement each sort using a different algorithm:
for example you can use insertion sort to sort by gold value and merge sort to sort by rarity level.
In practice, you would probably use quick sort for everything, but the point here is to get a feel for how one problem can be solved in multiple ways.

You can see visualization and code implementations of all sorting algorithms here:
https://sortvisualizer.com/

Here is the best video I found that explains the hash table stuff I went over on Wednesday:
https://www.youtube.com/watch?v=2Ti5yvumFTU

Have fun!
