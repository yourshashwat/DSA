// Round Robin Scheduling Algorithm Implementation in C++
#include <bits/stdc++.h>

using namespace std;

struct Process{
    int at,bt,id,rt,ct,tat,wt;
};



int main(){
    cout<<"Enter number of processes: ";
    int n;
    cin>>n;
    vector<Process> p(n);
    cout<<"Enter arrival time and burst time of each process:\n";
    for(int i=0;i<n;i++){
        cin>>p[i].at>>p[i].bt;
        p[i].id=i+1;
        p[i].rt=p[i].bt;
    }
    int timeQuantum;
    cout<<"Enter time quantum: ";
    cin>>timeQuantum;

    int currentTime = 0;
    queue<int> q;
    int completed = 0;
    vector<bool> inQueue(n, false);
    vector<Process> result(n); 
    int lastArrival = 0;

    
    sort(p.begin(), p.end(), [](const Process &a, const Process &b){ return a.at < b.at; });

   
    for(int i = 0; i < n; ++i) {
        if(p[i].at == 0) {
            q.push(i);
            inQueue[i] = true;
            lastArrival = i+1;
        }
    }
    if(q.empty()) {
        q.push(0);
        inQueue[0] = true;
        currentTime = p[0].at;
        lastArrival = 1;
    }

    while(completed < n) {
        if(q.empty()) {
           
            currentTime = p[lastArrival].at;
            q.push(lastArrival);
            inQueue[lastArrival] = true;
            lastArrival++;
        }
        int idx = q.front();
        q.pop();
       
        for(int i = lastArrival; i < n; ++i) {
            if(p[i].at <= currentTime && !inQueue[i]) {
                q.push(i);
                inQueue[i] = true;
                lastArrival = i+1;
            }
        }
        if(p[idx].rt > timeQuantum) {
            p[idx].rt -= timeQuantum;
            currentTime += timeQuantum;
            
            for(int i = lastArrival; i < n; ++i) {
                if(p[i].at <= currentTime && !inQueue[i]) {
                    q.push(i);
                    inQueue[i] = true;
                    lastArrival = i+1;
                }
            }
            q.push(idx); 
        } else {
            currentTime += p[idx].rt;
            p[idx].rt = 0;
            completed++;
            p[idx].ct = currentTime;
            p[idx].tat = p[idx].ct - p[idx].at;
            p[idx].wt = p[idx].tat - p[idx].bt;
            result[idx] = p[idx];
        }
    }

    cout << endl << "Process\tArrival Time\tBurst Time\tWaiting Time\tTurnaround Time\tCompletion Time\n";
    for(int i = 0; i < n; ++i) {
        cout << result[i].id << "\t\t" << result[i].at << "\t\t" << result[i].bt << "\t\t" << result[i].wt << "\t\t" << result[i].tat << "\t\t" << result[i].ct << endl;
    }
    // sequence of execution
    cout << "\nGantt Chart:\n|";
    for(int i = 0; i < n; ++i) {
        cout << " P" << result[i].id << " |";
    }
    cout << endl;
    

    // Average waiting time and turnaround time
    double totalWT = 0, totalTAT = 0;
    for(int i = 0; i < n; ++i) {
        totalWT += result[i].wt;
        totalTAT += result[i].tat;
    }
    cout << "\nAverage Waiting Time: " << (totalWT / n);
    cout << "\nAverage Turnaround Time: " << (totalTAT / n)<< endl;

    return 0;
}
