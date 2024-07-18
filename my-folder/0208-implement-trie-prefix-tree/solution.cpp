class trieNode{
    public:
        trieNode *children[26];
        bool isTerminal;
        trieNode(){
            for(int i=0;i<26;i++){
                children[i]=nullptr;
                isTerminal=false;
            }
        }
};
class Trie {
    trieNode *root;
public:
    Trie() {
        root = new trieNode();
    }
    
    void insert(string word) {
        int n=word.size();
        trieNode *ptr=root;
        for(int i=0;i<n;i++){
            if(!ptr->children[word[i]-'a']){
                ptr->children[word[i]-'a'] = new trieNode(); 
            }
            ptr = ptr->children[word[i]-'a'];
        }
        ptr->isTerminal=true;
    }
    
    bool search(string word) {
        trieNode *ptr=root;
        for(char x:word){
            if(!ptr->children[x-'a']){
                return false;
            }
            ptr=ptr->children[x-'a'];
        }
        return ptr->isTerminal;
    }
    
    bool startsWith(string prefix) {
        trieNode *ptr=root;
        for(char x:prefix){
            if(!ptr->children[x-'a']){
                return false;
            }
            ptr=ptr->children[x-'a'];
        }
        return true;
    }
};
