 / *   
   *   C h i n e s e   C o m m e n t   b y   G B 2 3 1 2 
   *   
   *  ��v�Q�[� 
   *  ��~�Q�_�c�^�v�{�l� 
   *   
   *  Rg� 
   *  W�g,{�l�R�^�0Q�N%rHN�{,N N*N: p i v o tv�\1�LN�0 
 * / 
 
 v o i d   s w a p ( i n t *   a ,   i n t *   b )   { 
         i n t   t e m p   =   * a ; 
         * a   =   * b ; 
         * b   =   t e m p ; 
 } 
 
 v o i d   q u i c k _ s o r t ( i n t *   a r r a y ,   u n s i g n e d   i n t   l e n g t h )   { 
         _ _ q u i c k _ s o r t ( a r r a y ,   0 ,   l e n g t h ) ; 
 } 
 
 v o i d   _ _ q u i c k _ s o r t ( i n t *   a r r a y ,   u n s i g n e d   i n t   b e g i n ,   u n s i g n e d   i n t   e n d )   {   / /]�_ S�� 
         i f   ( b e g i n   +   1   > =   e n d )   r e t u r n ; 
         u n s i g n e d   i n t   l e f t   =   b e g i n   +   1 ,   r i g h t   =   e n d   -   1 ; 
         w h i l e   ( 1 )   { 
                 w h i l e   ( l e f t   <   r i g h t   & &   a r r a y [ l e f t ]   < =   a r r a y [ b e g i n ] )   l e f t + + ; 
                 w h i l e   ( l e f t   <   r i g h t   & &   a r r a y [ r i g h t ]   >   a r r a y [ b e g i n ] )   r i g h t - - ; 
                 i f   ( l e f t   <   r i g h t )   { 
                         s w a p ( a r r a y   +   l e f t ,   a r r a y   +   r i g h t ) ; 
                 }   e l s e   b r e a k ; 
         } 
         s w a p ( a r r a y   +   0 ,   a r r a y   +   r i g h t ) ; 
         _ _ q u i c k _ s o r t ( a r r a y ,   b e g i n ,   r i g h t ) ; 
         _ _ q u i c k _ s o r t ( a r r a y ,   r i g h t ,   e n d ) 
 }