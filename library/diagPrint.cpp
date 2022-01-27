    for( int k = 0 ; k < dim * 2 ; k++ ) {
        for( int j = 0 ; j <= k ; j++ ) {
            int i = k - j;
            if( i < dim && j < dim ) {
                System.out.print( array[i][j] + " " );
            }
        }
        System.out.println();
    }
