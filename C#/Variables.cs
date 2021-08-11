using System;

namespace Testing {
    class Program {
        static void Main(string[] args) {
            // <type> <name> = <value>
            int testInt = 1;
            double testDouble = 3.14;
            char testChar = 'A';
            string testString = "Hi There.";
            bool testBool = true;

            var unknownVar = "Hello World!"; // var

            Console.WriteLine($"testInt: {testInt}");
            Console.WriteLine($"testDouble: {testDouble}");
            Console.WriteLine($"testChar: {testChar}");
            Console.WriteLine($"testString: {testString}");
            Console.WriteLine($"testBool: {testBool}");
            Console.WriteLine($"unknownVar: {unknownVar}");
        }
    }
}

/*
Not too sure what var does, but from what I can find online its type is automatically assumed by the compiler.
*/