#include "bench/fib.hpp"

// RE Benchmark TU 3190 of 20000 (depth=28, stamp="default")
namespace bench_tu_3190 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3190>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3190
