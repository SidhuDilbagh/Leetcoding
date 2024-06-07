class trieNode{
    public:
        trieNode* next[26]={NULL};
        bool isTerminal=false;
};
class trie{
    private:
        trieNode *root;
    public:
        trie(){
            root=new trieNode;
        }
        void insert(string word){
            trieNode *ptr=root;
            for(char x:word){
                if(ptr->next[x-'a']){
                    ptr=ptr->next[x-'a'];
                }
                else{
                    ptr->next[x-'a']=new trieNode;
                    ptr=ptr->next[x-'a'];
                }
            }
            ptr->isTerminal=true;
        }
        string shortRoot(string word){
            trieNode *ptr=root;
            int length=0;
            for(char x:word){
                if(ptr->next[x-'a']){
                    ptr=ptr->next[x-'a'];
                    length++;
                    if(ptr->isTerminal){
                        return word.substr(0,length);
                    }
                }
                else{
                    return word;
                }
            }
            return word;
        }
};
class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        string answer;
        trie myDictionary;
        for(string w:dictionary){
            myDictionary.insert(w);
        }
        istringstream sStream(sentence);
        string word;
        while(getline(sStream,word,' ')){
            answer+=myDictionary.shortRoot(word)+" ";
        }
        answer.pop_back();
        return answer;
    }
};
