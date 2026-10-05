#include "bench/fib.hpp"

// RE Benchmark TU 11190 of 20000 (depth=28, stamp="default")
namespace bench_tu_11190 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11190>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11190
