using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;

namespace ConsoleArchiver
{
    class Program
    {
        static void Main(string[] args)
        {
            string fileName = args[0];
            int coreNumber = Environment.ProcessorCount;
            long fileLength = new System.IO.FileInfo(args[0]).Length;
            long[] startPoints = new long[coreNumber];

            Console.WriteLine("Number Of Logical Processors: {0}", coreNumber);
            Console.WriteLine("Process file: {0}", fileName);
            Console.WriteLine("File length: {0}", fileLength);

            ArchiveProcesser[] archiveProcessers = new ArchiveProcesser[coreNumber];
            Thread[] newThread = new Thread[coreNumber];
            for (int i = 0; i < coreNumber; i++)
            {
                archiveProcessers[i] = new ArchiveProcesser(
                    fileName, 
                    i * (fileLength / coreNumber),
                    (i + 1) * (fileLength / coreNumber)
                    );
                newThread[i] = new Thread(archiveProcessers[i].archive);
                newThread[i].Start();
            }
            

            Console.ReadKey();
        }
    }
}
