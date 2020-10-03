import java.util.*;

class DNS {
	
	String domain;
	String ip;
	
	DNS (String domain, String ip) {
		
		this.domain = domain;
		this.ip = ip;	

	}

}

class Dictionary {

	LinkedList<DNS>[] hashTable = new LinkedList[100];
	
	Dictionary () {

		for (int i=0; i<100; i++)
        	hashTable[i] = new LinkedList<DNS> ();
	
	}

	void insert (String domain, String ip) {

		hashTable[hash (domain)].add (new DNS (domain,ip));
		
	}

	void find (String domain) {

		boolean status = false;
		
		for (DNS temp : hashTable[ hash(domain)]) {

			if (temp.domain.equals(domain)) {
				
				System.out.println("DNS Entry found:");
				System.out.println(temp.domain + " " + temp.ip);
				status = true;

			}

		}

		if (status == false)
			System.out.println("DNS entry not found");

	}

	int hash (String domain) {

		char[] domainArray = domain.toCharArray();

		long hash = 0;
		final long BASE = 33;

		for (int i = 0; i < domainArray.length; ++i) {

			hash = hash + ((long) domainArray[i] * (long) Math.pow(BASE,i));
			 	
		}

		hash %= 100;
		
		return (int) hash;
	
	}

}

class assign8 {

	public static void main (String[] args) {

		Dictionary dnslist = new Dictionary ();

		dnslist.insert ("bbc.co.uk", "212.58.241.131");
		dnslist.insert ("aljazeera.com", "198.78.201.252");
		dnslist.insert ("reddit.com","72.247.244.88");
		dnslist.insert ("imgur.com", "173.231.140.219");
		dnslist.insert ("google.com", "172.217.11.17");
		dnslist.insert ("youtube.com", "74.125.65.91");
		dnslist.insert ("yahoo.com", "98.137.149.56");
		dnslist.insert ("hotmail.com" ,"65.55.72.135");
		dnslist.insert ("bing.com", "65.55.175.254");
		dnslist.insert ("digg.com", "64.191.203.30");
		dnslist.insert ("theonion.com", "97.107.137.164");
		dnslist.insert ("hush.com", "65.39.178.43");
		dnslist.insert ("gamespot.com", "216.239.113.172");
		dnslist.insert ("ign.com", "69.10.25.46");
		dnslist.insert ("cracked.com", "98.124.248.77");
		dnslist.insert ("sidereel.com", "144.198.29.112");
		dnslist.insert ("github.com", "207.7.227.239");
		dnslist.insert ("thepiratebay.org", "194.71.107.15");
		dnslist.insert ("mininova.com", "80.94.76.5");
		dnslist.insert ("btjunkie.com", "93.158.65.211");
		dnslist.insert ("demonoid.com", "62.149.24.66");
		dnslist.insert ("demonoid.me", "62.149.24.6");
		dnslist.insert ("facebook.com", "31.13.77.36");
		dnslist.insert ("twitter.com", "199.59.149.230");
		dnslist.insert ("tumblr.com", "174.121.194.34");
		dnslist.insert ("livejournal.com", "209.200.154.225");
		dnslist.insert ("dreamwidth.org", "69.174.244.5");
		dnslist.insert ("stickam.com", "67.201.54.151");
		dnslist.insert ("blogtv.com", "84.22.170.149");
		dnslist.insert ("justin.tv", "199.9.249.21");
		//dns.insert ("chatroulette.com", "184.173.141.231");
		dnslist.insert ("omegle.com", "97.107.132.144");
		dnslist.insert ("own3d.tv", "208.94.146.80");
		dnslist.insert ("megavideo.com", "174.140.154.32");
		//dns.insert ("gorillavid.com", "178.17.165.74");
		dnslist.insert ("videoweed.com", "91.220.176.248");
		dnslist.insert ("novamov.com", "91.220.176.248");
		dnslist.insert ("tvlinks.com", "208.223.219.206");
		dnslist.insert ("1channel.com", "208.87.33.151");
		dnslist.insert ("amazon.com", "72.21.211.176");
		dnslist.insert ("newegg.com", "216.52.208.187");
		dnslist.insert ("frys.com", "209.31.22.39");
		dnslist.insert ("mediafire.com", "205.196.120.13");
		//dns.insert ("megaupload.com", "174.140.154.20");
		dnslist.insert ("fileshare.com", "208.87.33.151");
		dnslist.insert ("multiupload.com", "95.211.149.7");
		dnslist.insert ("uploading.com", "195.191.207.40");
		dnslist.insert ("warez-bb.org", "31.7.57.13");
		dnslist.insert ("hotfile.com", "199.7.177.218");
		dnslist.insert ("gamespy.com", "69.10.25.46");
		dnslist.insert ("what.cd", "67.21.232.223");
		dnslist.insert ("warez.ag", "178.162.238.136");
		dnslist.insert ("putlocker.com", "89.238.130.247");
		dnslist.insert ("uploaded.to", "95.211.143.200");
		dnslist.insert ("dropbox.com", "199.47.217.179");
		dnslist.insert ("pastebin.com", "69.65.13.216");

		Scanner scanner = new Scanner (System.in);

		System.out.println("Enter domain to search");
		String domain = scanner.nextLine();

		dnslist.find(domain);		
	}

}
