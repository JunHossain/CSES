    #include<bits/stdc++.h>
    using namespace std;

    int main(){
        int t;
        cin >> t;

        while(t--){
            int n;
            cin >> n;

            vector<vector<int>>totalsets;

            for(int i=0; i<n; i++){
                int k;
                cin >> k;

                vector<int>currentset;

                for(int j=0; j<k; j++){
                    int value;
                    cin >> value;
                    currentset.push_back(value);
                }

                totalsets.push_back(currentset);
            }

            vector<int>finalvector;
            for(int i=0; i<n; i++){
                finalvector.insert(finalvector.end(), totalsets[i].begin(), totalsets[i].end());
            }

            sort(finalvector.begin(), finalvector.end());
            finalvector.erase(unique(finalvector.begin(), finalvector.end()), finalvector.end());

            if(finalvector.size()-1==1){
                cout << "0" << "\n";
            }else{
                cout << finalvector.size()-1 << "\n";
            }

        }
    }
