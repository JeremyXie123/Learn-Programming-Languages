using System;

namespace Testing {
    class Program {
        static void Main(string[] args) {
            Console.WriteLine("What is your name?");
            var name = Console.ReadLine(); // Reads a line of input from the console
            var currentDate = DateTime.Now;
            Console.WriteLine($"Hello {name}");
            Console.WriteLine($"Today's Date: {currentDate:d}");
            Console.WriteLine($"The Time: {currentDate:t}");
            Console.Write($"\nPress any key to exit...");
            Console.ReadKey(true); // Unblocks when a key is pressed
        }
    }
}

/*
Using the $ symbol is somewhat similar to a formatted string, with expressions entered within a curly bracket pair being concatenated to the string
*/