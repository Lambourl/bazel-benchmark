#include "bench/fib.hpp"

// RE Benchmark TU 976 of 20000 (depth=28, stamp="default")
namespace bench_tu_976 {
constexpr unsigned long long result = ::bench::slow_fib<28, 976>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_976
