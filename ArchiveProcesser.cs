using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleArchiver
{
    class ArchiveProcesser
    {
        FileStream fs;
        long length;


        public void archive() {

        }
        private void unarchive() {

        }

        public ArchiveProcesser(string fileName, long offset,long length) {
            fs = File.Open(fileName, FileMode.Open);
            fs.Seek(offset, SeekOrigin.Begin);
            this.length = length;
        }

    }
}
