class Node { 

        int key; 
        Node left, right; 

        public Node(int item) { 
         
            key = item; 
            left = right = null; 
        } 
}

class BinarySearchTree {    
    
    Node root;
    
    BinarySearchTree() { 
        root = null; 
    }
    
    public Node find (Node root, int key) {     
        
        if (root==null || root.key==key) 
            return root; 

        if (root.key > key) 
            return find(root.left, key); 

        return find(root.right, key); 
    } 

    
    void deleteKey(int key) {
     
        root = deleteRec(root, key); 
    }
    
    Node deleteRec(Node root, int key) {
    
        
        if (root == null) return root; 
        
        if (key < root.key) 
            root.left = deleteRec(root.left, key); 

        else if (key > root.key) 
            root.right = deleteRec(root.right, key);
        
        else {         
            
            if (root.left == null) 
                return root.right; 

            else if (root.right == null) 
                return root.left;
           
            root.key = minValue(root.right); 
            
            root.right = deleteRec(root.right, root.key); 
        } 

        return root; 
    } 

    int minValue(Node root) {
    
        int minv = root.key; 

        while (root.left != null) { 

            minv = root.left.key; 
            root = root.left; 
        }

        return minv; 
    }
    
    void insert(int key) { 
     
        root = insertRec(root, key); 
    }
    
    Node insertRec(Node root, int key) {
        
        if (root == null) { 
         
            root = new Node(key); 
            return root; 
        } 
        
        if (key < root.key) 
            root.left = insertRec(root.left, key); 
        else if (key > root.key) 
            root.right = insertRec(root.right, key);
        
        return root; 
    }    

    int size() { 
        return sizeRec(root); 
    } 
  
    int sizeRec(Node node) { 
     
        if (node == null) 
            return 0; 
        else
            return(sizeRec(node.left) + 1 + sizeRec(node.right)); 
    }     
    
}

class assign9 {

    public static void main(String[] args) {

        BinarySearchTree tree = new BinarySearchTree();

        tree.insert(5);
        tree.insert(3);
        tree.insert(7);
        tree.insert(9);
        tree.insert(1);
	System.out.println("Inorder is");
        printInorder(tree.root);
	System.out.println("Post order is");
	printPostorder(tree.root);
	System.out.println("Pre order is");
	printPreorder(tree.root);
        
    }

    static void printPostorder(Node node) { 
     
        if (node == null) 
            return;  
        
        printPostorder(node.left);   
        printPostorder(node.right);   
        System.out.print(node.key + " "); 
    } 
  
    static void printInorder(Node node) { 

        if (node == null) 
            return;  
 
        printInorder(node.left);
        System.out.print(node.key + " ");
        printInorder(node.right); 
    } 
  
    static void printPreorder(Node node) { 
     
        if (node == null) 
            return; 
  
        System.out.print(node.key + " ");
        printPreorder(node.left);
        printPreorder(node.right); 
    }
}
