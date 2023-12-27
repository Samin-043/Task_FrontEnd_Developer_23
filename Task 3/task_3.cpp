#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll binarySearch(vector<ll>v, ll  left, ll  right, ll target_value)
{
    while (left <= right)
    {
        ll  mid = left + (right - left) / 2;
        if (v[mid] == target_value)
        {
            return mid;
        }
        if (v[mid] < target_value)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return -1;
}


int  main()
{
    ll size_of_a_list;
    cout<<"Enter the size of a list : ";
    cin>>size_of_a_list;
    vector<ll> v(size_of_a_list);
    vector<ll> previous_list(size_of_a_list);

    cout<<"Enter the Number : "<<endl;
    for(ll index=0; index<size_of_a_list; index++)
    {
        ll input_number;
        cin>>input_number;
        v[index]=input_number;
        previous_list[index]=input_number;
    }

    cout<<"Before Sorting : "<<endl;
    for(ll index=0; index<size_of_a_list; index++)
    {
        cout<<v[index]<<" ";
    }

    sort(v.begin(),v.end());

    cout<<"After Sorting : "<<endl;
    for(ll index=0; index<size_of_a_list; index++)
    {
        cout<<v[index]<<" ";
    }

    //test case 1
    ll length=v.size();
    ll sum=v[length-1]+v[length-2];
    vector<ll>index_list;
    cout<<endl;
    if(sum<size_of_a_list)
    {
        cout<<"No index found"<<endl;
    }
    else
    {
        for(ll  index=(length-1); index>0; index--)
        {
            ll sum=v[index]+v[index-1];
            if(sum>=size_of_a_list)
            {
                ll first_index=binarySearch(v,0,length-1,v[index]);
                ll second_index=binarySearch(v,0,length-1,v[index-1]);
                index_list.push_back(first_index+1);
                index_list.push_back(second_index+1);
            }
        }
    }

    cout<<"Final output index is : "<<endl;
    for(ll output=0; output<index_list.size(); output++)
    {
        cout<<index_list[output]<<" ";
    }
    cout<<endl;

    return 0;
}
