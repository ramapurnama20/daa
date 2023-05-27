    public:
        colck(int   jam = 0, int menit = 0, int detik = 0)
        void setWaktu)(int jamInput, int menitInput, int detikInput);
        int getjam();
        int getMenit();
        int getDetik();
        void displayjam();
        void tambahjam();
        void tambahMenit();
        void tambahDetik();

    private:
        int jam, menit, detik;
};

    clock::clock(int jam, int menit, int detik){
        setwaktu jam, menit, detik);
}

void clock::setWaktu(int jamInput, int mrnitInput intdetikInput){
    if ((jamInput>0 && jamainput <24)&&(menitInput>=0 && menitInput<60)&&(detik)
        jam = jamInput;
        menit = menitInput;
        detik = detikInput;

    }else{
        cout<<"format waktu salah"<<endl:
}