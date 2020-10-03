interface Movable {

	public void move (String newPos);

}

abstract class ChessPiece implements Movable {
	
	String color;
	String curPos;

	public void move (String newPos) {
	
		this.curPos = newPos;

	}
	
	public ChessPiece (String color, String curPos) {

		this.color = color;
		this.curPos = curPos;	
	
	}

}

class Pawn extends ChessPiece {

	public Pawn (String color, String curPos) {
	
		super(color, curPos);
	
	}

}

class Rook extends ChessPiece {

        public Rook (String color, String curPos) {

		super(color, curPos);

	}

}

class Knight extends ChessPiece {

        public Knight (String color, String curPos) {

		super(color, curPos);

	}

}

class Bishop extends ChessPiece {

        public Bishop (String color, String curPos) {

		super(color, curPos);
	
	}

}

class Queen extends ChessPiece {

        public Queen (String color, String curPos) {

		super(color, curPos);

	}

}


class King extends ChessPiece {

        public King (String color, String curPos) {

		super(color, curPos);
	
	}

}

class Chess {

	public static void main (String[] args) {
	
		Pawn pawn1 = new Pawn ("Black","7A");
		Pawn pawn2 = new Pawn ("Black","7B");
	
	
	
	
	}

}
