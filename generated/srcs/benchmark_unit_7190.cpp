#include "bench/fib.hpp"

// RE Benchmark TU 7190 of 20000 (depth=28, stamp="default")
namespace bench_tu_7190 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7190>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7190
