vector<pair<string,string>> parse_path(string path){
    string dir;
    int i = 0;
    vector<pair<string, string>> ans;
    while(path[i]!=' ')i++;
    dir = path.substr(0, i);
    i++;
    int start = i;
    while(i<path.length()){
        if(path[i]=='('){
            string full_path = dir+'/'+path.substr(start, i-start);
            start = i+1;
            while(path[i]!=')')i++;
            ans.push_back({full_path, path.substr(start, i-start)});
            i+=2;
            start = i;
        }
        else i++;
    }

    return ans;
}

class Solution {
public:
    vector<vector<string>> findDuplicate(vector<string>& paths) {
        unordered_map<string, vector<string>> content_to_paths;
        unordered_map<string, vector<string>>::iterator itr;

        for(auto path: paths){
            for(auto parsed_files: parse_path(path)){
                if(content_to_paths.find(parsed_files.second)!=content_to_paths.end())content_to_paths[parsed_files.second].push_back(parsed_files.first);
                else content_to_paths[parsed_files.second] = {parsed_files.first};
            }
        }

        vector<vector<string>> ans;

        for(itr=content_to_paths.begin();itr!=content_to_paths.end();itr++){
            if(itr->second.size()>1)ans.push_back(itr->second);
        }

        return ans;      
    }
};
