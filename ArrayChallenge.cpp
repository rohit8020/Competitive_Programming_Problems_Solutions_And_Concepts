#include<bits/stdc++.h>
using namespace std;

pair<string,string> ArrayChallenge(string arr[],int n){
    //"12:15PM-02:00PM"

    priority_queue<int, vector<int>, greater<int> > min;
    priority_queue<int> max;

    for (size_t i = 0; i < n; i++)
    {
        string startHr=arr[i].substr(0,2);
        string startMin=arr[i].substr(3,2);
        string startTime=arr[i].substr(5,2);

        string endHr=arr[i].substr(8,2);
        string endMin=arr[i].substr(11,2);
        string endTime=arr[i].substr(13,2);

        if(startTime=="AM"){

            int startMinutes=(stoi(startHr))*60;
            startMinutes+=stoi(startMin);
            min.push(startMinutes);
        }else{
            if(startHr=="12"){
                int startMinutes=(stoi(startHr))*60;
                startMinutes+=stoi(startMin);
                min.push(startMinutes);
            }else{
                int startMinutes=(12+stoi(startHr))*60;
                startMinutes+=stoi(startMin);
                min.push(startMinutes);
            }
        }

        if(endTime=="AM"){

            int endMinutes=(stoi(endHr))*60;
            endMinutes+=stoi(endMin);
            max.push(endMinutes);
        }else{
            if(endHr=="12"){
                int endMinutes=(stoi(endHr))*60;
                endMinutes+=stoi(endMin);
                max.push(endMinutes);
            }else{
                int endMinutes=(12+stoi(endHr))*60;
                endMinutes+=stoi(endMin);
                max.push(endMinutes);
            }
        }

    }
    
    int minTime=min.top();
    int maxTime=min.top();

    cout<<"MIn"<<minTime<<endl;
    cout<<"MAx"<<maxTime<<endl;

    int timeDiff=maxTime-minTime;
    int timeDiffHr=timeDiff/60;
    int timeDiffMin=timeDiff%60;
    string sol="";
    string finalSol="";
    if(timeDiffHr>=10){
        sol=sol+to_string(timeDiffHr);
        finalSol+=to_string(timeDiffHr)+":" + to_string((timeDiffMin/10))+"--"+to_string((timeDiffMin%10))+"--";
        sol=sol+":"+to_string((timeDiffMin/10))+to_string((timeDiffMin%10));
    }else{
        sol+="0"+to_string(timeDiffHr)+":";
        finalSol+=sol+to_string((timeDiffMin/10))+"--"+to_string((timeDiffMin%10))+"--";
        sol+=to_string((timeDiffMin/10))+to_string((timeDiffMin%10));
    }

    pair<string, string> p(sol,finalSol);

    return p;
}

int main()
{
    string arr[1000];
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<ArrayChallenge(arr,n).first<<" "<<ArrayChallenge(arr,n).second<<endl;

    
    return 0;
}