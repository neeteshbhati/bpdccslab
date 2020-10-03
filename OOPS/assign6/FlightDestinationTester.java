import java.util.*;

class FlightDest {

	private String flightno;
	private String destination;

	public FlightDest (String flightno, String destination) {
	
		this.flightno = flightno;
		this.destination = destination;
	
	}

	String getDestination() {
	
		return destination;

	}

	public String toString() {
	
		return String.format("FLight No: %s",flightno);
			
	}
	
}

class FlightInfo {

	ArrayList<FlightDest> flightdestlist;

	public FlightInfo () {
	
		flightdestlist = new ArrayList<FlightDest>();
	
	}

	public void addFlightDestPair(String fno, String dest) {
	
		flightdestlist.add(new FlightDest(fno, dest));
	
	}

	public ArrayList<FlightDest> getflightdest (String dest) {
	
		ArrayList<FlightDest> templist = new ArrayList<FlightDest>();

		Iterator itr = flightdestlist.iterator();

		while (itr.hasNext()) {
		
			
			FlightDest temp = (FlightDest)itr.next();

			if(temp.getDestination().equals("Dubai"))
				templist.add(temp);
		
			

		}

		return templist;
	
	
	}

}

public class FlightDestinationTester {

	public static void main(String[] args) {
	
		FlightInfo flightinfo = new FlightInfo();
		
		flightinfo.addFlightDestPair("EK516","Dubai");
		flightinfo.addFlightDestPair("AA131","New York");
		flightinfo.addFlightDestPair("AI619","Dubai");

		System.out.println(flightinfo.getflightdest("Dubai"));
	
	}

}

