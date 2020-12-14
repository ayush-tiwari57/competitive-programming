while(i<n && k>0){
        if(bit_pos[i].size()==0){
            i++;
            continue;
        }
        x=*(--bit_pos[i].end());
        cout<<x<<endl;
        // bit_pos[i].pop_back();
        // a[i]^=((int)(pow(2, x) + 0.5));
        // mat[x].pop_front();
        // if(mat[x].size()==0){
        //     a[n-1]^=((int)(pow(2, x) + 0.5));
        //     mat[x].push_back(n-1);
        // }
        // else{
        //     int y=mat[x][0];
        //     // cout<<i<<" "<<x<<" "<<y<<endl;
        //     mat[x].pop_front();
        //     a[y]^=((int)(pow(2, x) + 0.5));
        // }
        i++;
        k--;
    }
    forn(i,0,n) cout<<a[i]<<" ";
    cout<<endl;