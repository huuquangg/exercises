struct fract {
    long long a, b;
    void input() {
        cin >> a >> b;
        if (b == 0) {
                throw std::invalid_argument(" The denominator of the fractions can't be zero");
        }
    }
    bool smaller_than(fract other) {
        int s = 1;
		long long something = a * other.b - b * other.a;
		if (something == 0) {
			return false;
		}
		else if (something < 0) {
			s = s * (-1);
		}
		if ((b* other.b < 0)) {
			s = s * (-1);
		}
		if (s == -1) {
			return true;
		}
		else {
			return false;
		}

    }
    bool operator == (const fract other) {
        if (a * other.b - b * other.a == 0) {
            return true;
        }
        else {
            return false;
        }
    }
    friend  ostream& operator << (ostream& out, fract x) {
        out << x.a << "/" << x.b;
        return out;
    }

};