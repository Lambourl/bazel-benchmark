#include "bench/fib.hpp"

// RE Benchmark TU 18707 of 20000 (depth=28, stamp="default")
namespace bench_tu_18707 {
constexpr unsigned long long result = ::bench::slow_fib<28, 18707>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_18707
