using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Math;

namespace Maths
{
   public class Rooter
    {
        public Rooter()
        {
        }

        // estimate the square root of a number
        public double SquareRoot(double x)
        {
            double estimate = x;
            double diff = x;
            while (diff > estimate / 1000)
            {
                double previousEstimate = estimate;
                estimate = estimate - (estimate * estimate - x) / (2 * estimate);
                diff = Math.Abs(previousEstimate - estimate);
            }
            return estimate;
        }
    }
}
