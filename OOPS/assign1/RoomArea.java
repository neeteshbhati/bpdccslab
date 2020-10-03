class Room {
	float length, breath, area;
	void getData (float l, float b) {
		length = l;
		breath = b;
	}
	float putArea () {
		area = length * breath;
		return area;
	}
}

class RoomArea {
	public static void main (String args[]) {
		Room room1 = new Room ();
		room1.getData(24,36);
		System.out.println("The area is " + room1.putArea());
	}
}
