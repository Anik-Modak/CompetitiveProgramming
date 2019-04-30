import java.io.*;
import java.math.BigInteger; // arbitrary precision integer object

public class StirlingNumbers
{
  public static void main ( String[] args )
  {
    BigInteger[] row;        // a row of Stirling numbers
    int numRows = 100;  // number of rows to generate
    String path = ;           // enter the path for the output file here
    
    // Set up output file
    PrintWriter outfile = null;
    try {
      outfile = new PrintWriter(new FileWriter(path + numRows + ".txt"));
    }
    catch (IOException e){
      e.printStackTrace();
    }
    
    // First row of "Stirling triangle"
    row = new BigInteger[ 2 ];
    row[ 0 ] = BigInteger.ZERO; // zeros are stored to prevent NullPointerException
    row[ 1 ] = BigInteger.ONE;
    outfile.println( "1" );
    
    for ( int count = 1; count <= numRows; count++ )
    {
      // Prepare next row of triangle
      BigInteger[] newRow = new BigInteger[ row.length + 1 ];
      newRow[ 0 ] = BigInteger.ZERO;
      
      // Generate next row using S(n, k) = S(n-1, k-1) + k*S(n-1, k)
      for ( int i = 1; i < newRow.length - 1; i++ )
      {
        BigInteger iVal = new BigInteger( i + "" ); // BigInteger wants a String for some reason
        newRow[ i ] = row[ i - 1 ].add( iVal.multiply( row[ i ] ) );  // S(n, k) = S(n-1, k-1) + k*S(n-1, k)
      }
      newRow[ newRow.length - 1 ] = BigInteger.ONE;  // last entry is always 1
      
      // Print row to file
      for ( int i = 1; i < newRow.length; i++ )
        outfile.print( newRow[ i ] + " " );
      outfile.println();
      
      row = newRow;
      if ( count % 100 == 0 )
        System.out.println( count );  // a friendly printout to keep you updated
    } // end for desired number of rows
    
    outfile.close();
  } // end main method
} // end class StirlingBanners