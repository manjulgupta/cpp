//First non-repeating character in a stream
//Input: A = "zz"
// Output: "z#"
// Input: A = "aabc"
// Output: "a#bb"
class Solution {
	public:
		string FirstNonRepeating(string A){
		    unordered_map<char, int> m;
		    queue<int> q;
		    string ans="";
		    for(int i=0;i<A.length();i++){
		        char c=A[i];
		        m[c]++;
		        
		        q.push(c);
		        
		        while(!q.empty()){
		            if(m[q.front()]>1){
		                q.pop();
		            }
		            else{
		                ans.push_back(q.front());
		                break;
		            }
		        }
		        if(q.empty()){
		            ans.push_back('#');
		        }
		    }
		    return ans;
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends