#include <stdio.h>


int main() {
    float jan, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec, ave, svge;
    
    scanf("%f\n", &jan);
    scanf("%f\n", &feb);
    scanf("%f\n", &mar);
    scanf("%f\n", &apr);
    scanf("%f\n", &may);
    scanf("%f\n", &jun);
    scanf("%f\n", &jul);
    scanf("%f\n", &aug);
    scanf("%f\n", &sep);
    scanf("%f\n", &oct);
    scanf("%f\n", &nov);
    scanf("%f\n", &dec);
    printf("Monthly sales report for 2024:");
    printf("Month    Sales");
    printf("January   $ %f\n", jan);
    printf("February  $ %f\n", feb);
    printf("March     $ %f\n", mar);
    printf("April     $ %f\n", apr);
    printf("May       $ %f\n", may);
    printf("June      $ %f\n", jun);
    printf("July      $ %f\n", jul);
    printf("August    $ %f\n", aug);
    printf("September $ %f\n", sep);
    printf("October   $ %f\n", oct);
    printf("November  $ %f\n", nov);
    printf("December  $ %f\n\n", dec);
    printf("Sales Summary: \n");
    if (jan < feb && mar && apr && may && jun && jul && aug && sep && oct && nov && dec){
        printf("Minimum sales: $ %f\n", jan, "(January)");}
    else if (feb < jan && mar && apr && may && jun && jul && aug && sep && oct && nov && dec){
        printf("Minimum sales: $ %f\n", feb, "(February)");}
    else if (mar < jan && feb && apr && may && jun && jul && aug && sep && oct && nov && dec){
        printf("Minimum sales: $ %f\n", mar, "(March)");}
    else if (apr < jan && mar && feb && may && jun && jul && aug && sep && oct && nov && dec){
        printf("Minimum sales: $ %f\n", apr, "(April)");}
    else if (may < jan && mar && apr && feb && jun && jul && aug && sep && oct && nov && dec){
        printf("Minimum sales: $ %f\n", may, "(May)");}
    else if (jun < jan && mar && apr && may && feb && jul && aug && sep && oct && nov && dec){
        printf("Minimum sales: $ %f\n", jun, "(June)");}
    else if (jul < jan && mar && apr && may && jun && feb && aug && sep && oct && nov && dec){
        printf("Minimum sales: $ %f\n", jul, "(July)");}
    else if (aug < jan && mar && apr && may && jun && jul && feb && sep && oct && nov && dec){
        printf("Minimum sales: $ %f\n", aug, "(August)");}
    else if (sep < jan && mar && apr && may && jun && jul && aug && feb && oct && nov && dec){
        printf("Minimum sales: $ %f\n", sep, "(September)");}
    else if (oct < jan && mar && apr && may && jun && jul && aug && sep && feb && nov && dec){
        printf("Minimum sales: $ %f\n", oct, "(October)");}
    else if (nov < jan && mar && apr && may && jun && jul && aug && sep && oct && feb && dec){
        printf("Minimum sales: $ %f\n", nov, "(November)"); }
    else{
        printf("Minimum sales: $ %f\n", dec, "(December)"); 
    }   
    if (jan > feb && mar && apr && may && jun && jul && aug && sep && oct && nov && dec){
        printf("Maximum sales: $ %f\n", jan, "(January)");}
    else if (feb > jan && mar && apr && may && jun && jul && aug && sep && oct && nov && dec){
        printf("Maximum sales: $ %f\n", feb, "(February)");}
    else if (mar > jan && feb && apr && may && jun && jul && aug && sep && oct && nov && dec){
        printf("Maximum sales: $ %f\n", mar, "(March)");}
    else if (apr > jan && mar && feb && may && jun && jul && aug && sep && oct && nov && dec){
        printf("Maximum sales: $ %f\n", apr, "(April)");}
    else if (may > jan && mar && apr && feb && jun && jul && aug && sep && oct && nov && dec){
        printf("Maximum sales: $ %f\n", may, "(May)");}
    else if (jun > jan && mar && apr && may && feb && jul && aug && sep && oct && nov && dec){
        printf("Maximum sales: $ %f\n", jun, "(June)");}
    else if (jul > jan && mar && apr && may && jun && feb && aug && sep && oct && nov && dec){
        printf("Maximum sales: $ %f\n", jul, "(July)");}
    else if (aug > jan && mar && apr && may && jun && jul && feb && sep && oct && nov && dec){
        printf("Maximum sales: $ %f\n", aug, "(August)");}
    else if (sep > jan && mar && apr && may && jun && jul && aug && feb && oct && nov && dec){
        printf("Maximum sales: $ %f\n", sep, "(September)");}
    else if (oct > jan && mar && apr && may && jun && jul && aug && sep && feb && nov && dec){
        printf("Maximum sales: $ %f\n", oct, "(October)");}
    else if (nov > jan && mar && apr && may && jun && jul && aug && sep && oct && feb && dec){
        printf("Maximum sales: $ %f\n", nov, "(November)"); }
    else{
        printf("Maximum sales: $ %f\n", dec, "(December)"); 
    }  
    ave = (jan + feb + mar + apr + may + jun + jul + aug + sep + oct + nov + dec) / 12;
    printf("Average sales: $ %f\n\n", ave); 

    printf("Six-Month Moving Average Report: \n");
    svge = (jan + feb + mar + apr + may + jun) / 6;
    printf("January    - June      $ %f\n", svge);
     svge = (jul + feb + mar + apr + may + jun) / 6;
    printf("February   - July      $ %f\n", svge);
     svge = (jul + aug + mar + apr + may + jun) / 6;
    printf("March      - August    $ %f\n", svge);
     svge = (aug + jul + sep + apr + may + jun) / 6;
    printf("April      - September $ %f\n", svge);
     svge = (jul + aug + sep + oct + may + jun) / 6;
    printf("May        - October   $ %f\n", svge);
     svge = (jul + aug + sep + oct + nov + jun) / 6;
    printf("June       - November  $ %f\n", svge);
     svge = (jul + aug + sep + oct + nov + dec) / 6;
    printf("July       - December  $ %f\n\n", svge);

    printf("Sales Report (Highest to Lowest): \n");
    printf("Month       Sales \n");

    float mons[12] = {jan, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec};
    
}