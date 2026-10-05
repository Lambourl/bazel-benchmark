#include "bench/fib.hpp"

// RE Benchmark TU 17753 of 20000 (depth=28, stamp="default")
namespace bench_tu_17753 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17753>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17753
